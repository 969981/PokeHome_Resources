/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ab6bc; name: FUN_.text__005ab6bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ab6bc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long local_38 [2];
  undefined1 uStack_21;
  
  FUN__text__005e6444();
  param_1[0x4c] = 0;
  lVar5 = _DAT_008a5700;
  *(undefined4 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((long)param_1 + 0x26c) = 0;
  param_1[0x4e] = param_2;
  local_38[1] = 0;
  *param_1 = lVar5 + 0x10;
  param_1[9] = lVar5 + 0x68;
  param_1[10] = lVar5 + 0xa8;
  lVar5 = FUN__text__0015223c(&uStack_21,param_1[1],local_38 + 1);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  pcVar6 = *(code **)(lVar5 + 0x278);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    *(undefined8 *)(lVar5 + 0x270) = 0;
    *(undefined8 *)(lVar5 + 0x278) = 0;
    (*pcVar6)(lVar5 + 0x290);
  }
  uVar3 = _DAT_008a5718;
  uVar2 = _DAT_008a5710;
  uVar1 = _DAT_008a5708;
  *(long **)(lVar5 + 0x290) = param_1;
  uVar4 = _DAT_008a5720;
  *(undefined4 *)(lVar5 + 0x268) = 0;
  *(undefined8 *)(lVar5 + 0x270) = uVar1;
  *(undefined8 *)(lVar5 + 0x278) = uVar2;
  *(undefined8 *)(lVar5 + 0x280) = uVar3;
  *(undefined8 *)(lVar5 + 0x288) = uVar4;
  *(ulong *)(lVar5 + 0x130) = *(ulong *)(lVar5 + 0x130) | 2;
  local_38[0] = lVar5;
  FUN__text__005e733c(param_1,local_38);
  if (local_38[0] != 0) {
    (**(code **)(*(long *)(local_38[0] + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x4d) = 0;
  return;
}


