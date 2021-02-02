bool isCircular(Node *head)
{
   Node* first=head->next;
   Node* second=head;
   while(first!=second&&first!=NULL)
   {
       first=first->next;
       
   }
   return first==second;
}

