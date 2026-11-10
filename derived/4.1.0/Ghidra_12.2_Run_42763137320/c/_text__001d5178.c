/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d5178; name: FUN_.text__001d5178
 */


void FUN__text__001d5178(undefined8 *param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = *(undefined8 *)(param_3 + 8);
  uStack_48 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = FUN__text__00195844(param_4);
  iVar1 = *(int *)(lVar3 + 0xc);
  if (iVar1 != 0) {
    uVar2 = FUN__text__00191358((ulong)&local_50 | 4);
    lVar3 = *(long *)(param_3 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__005f3104(lVar3,*param_1);
    *(char *)(param_3 + 0x28) = (char)param_2;
    if (iVar1 == 1) {
      uVar4 = FUN__text__005f3244(*param_1);
      FUN__text__00320b30(uVar4,param_2,uVar2);
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


