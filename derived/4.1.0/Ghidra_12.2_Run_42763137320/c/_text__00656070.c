/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656070; name: FUN_.text__00656070
 */


undefined8 FUN__text__00656070(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf20);
  *(int *)(lVar2 + 0x648) = *(int *)(lVar2 + 0x648) + -1;
  FUN__text__00666f74(lVar2,0x70d4d0);
  if (param_2 != 0) {
    uVar1 = FUN__text__0066c44c(param_2);
    FUN__text__00666f74(lVar2,0x711259,uVar1);
  }
  if (*(int *)(lVar2 + 0x648) == 0) {
    FUN__text__0066bd88(*(undefined8 *)(lVar2 + 0x1f0));
    *(undefined8 *)(lVar2 + 0x1f0) = 0;
    FUN__text__0065a050(lVar2,0,6);
  }
  return 0;
}


