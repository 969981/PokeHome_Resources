/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002140e0; name: FUN_.text__002140e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__002140e0(undefined8 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ushort local_48 [8];
  void *local_38;
  undefined2 local_14 [2];
  
  if (*(int *)(param_1 + 2) == 0 || *(char *)((long)param_1 + 0x14) == '\0') {
    bVar1 = false;
  }
  else {
    lVar3 = FUN__text__00215448();
    if (lVar3 == 0) {
      return false;
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    local_50 = *(undefined8 *)(lVar3 + 0x20);
    local_48[0] = 0;
    local_60 = *param_1;
    uStack_58 = param_1[1];
    std::string::assign((char *)local_48);
    uVar6 = *_DAT_0089f528;
    uVar4 = FUN__text__00213f64(param_1 + 3);
    uVar5 = FUN__text__00213f68(param_1 + 3);
    local_14[0] = 0;
    iVar2 = FUN__text__00309850(uVar6,&local_60,uVar4,uVar5,local_14);
    bVar1 = iVar2 == 0;
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
      return bVar1;
    }
  }
  return bVar1;
}


