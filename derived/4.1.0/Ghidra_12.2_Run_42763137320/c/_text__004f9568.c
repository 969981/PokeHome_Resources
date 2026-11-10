/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9568; name: FUN_.text__004f9568
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004f9568(long *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_34;
  char *local_18;
  
  local_34 = param_3;
  local_18 = param_2;
  iVar3 = (**(code **)(*param_1 + 0x80))();
  if (iVar3 != 9) {
    lVar2 = param_1[4];
    uVar5 = *_DAT_008a4630;
    uVar4 = (**(code **)(*param_1 + 0x80))(param_1);
    FUN__text__004aab84(uVar5,(int)lVar2,9,uVar4);
    return 0x5b;
  }
  uVar5 = FUN__text__004f70e0(param_1,&local_18,&local_34,0);
  if ((int)uVar5 == 1) {
    pcVar1 = local_18 + 5;
    *(bool *)(param_1 + 0x2d) = *local_18 != '\0';
    iVar3 = *(int *)(local_18 + 1);
    local_18 = pcVar1;
    uVar5 = FUN__text__004f96a0(param_1,pcVar1,pcVar1 + (uint)(iVar3 << 2),iVar3);
    if ((int)uVar5 == 1) {
      pcVar1 = local_18 + (uint)(iVar3 * 5);
      local_18 = pcVar1 + 5;
      uVar4 = *(undefined4 *)pcVar1;
      *(char *)((long)param_1 + 0x162) = pcVar1[4];
      uVar5 = FUN__text__004cc1ac(param_1 + 0x2a,local_18,uVar4,iVar3);
    }
  }
  return uVar5;
}


