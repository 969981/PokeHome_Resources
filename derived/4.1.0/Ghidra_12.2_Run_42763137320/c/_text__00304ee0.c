/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00304ee0; name: FUN_.text__00304ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00304ee0(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_60 [16];
  undefined8 local_50;
  ushort local_48 [8];
  void *local_38;
  
  *(undefined2 *)(&DAT_0094c1ca + param_1) = 0;
  *(undefined8 *)(&DAT_0094c1c2 + param_1) = 0;
  uVar2 = DAT_008e1640;
  local_48[0] = 0;
  local_60 = FUN__text__0011b95c(DAT_008e15f0);
  local_50 = 0x10015f008c54000;
  std::string::assign((char *)local_48);
  iVar3 = FUN__text__00309ac0(uVar2,local_60);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  bVar1 = (param_2 & 1) == 0;
  if (!bVar1) {
    memset((void *)(param_1 + 0x50),0,0x94c170);
  }
  (&DAT_0094c1c0)[param_1] = bVar1;
  return iVar3 == 0;
}


