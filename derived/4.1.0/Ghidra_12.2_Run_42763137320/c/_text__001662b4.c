/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001662b4; name: FUN_.text__001662b4
 */


void FUN__text__001662b4(long param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60 [5];
  undefined4 local_38;
  
  uVar1 = (param_4 + param_5 * 2) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x001662f0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001662fc + (ulong)*(byte *)((ulong)uVar1 + 0x7252b7) * 4))();
    return;
  }
  local_80 = 0x25cb3746f1af731d;
  uStack_78 = 0x714490;
  local_70 = 0x17;
  local_68 = 0;
  FUN__text__0015b030(local_60,&local_80,0xb);
  uVar2 = FUN__text__00165374(param_1,*(undefined8 *)(param_1 + 0x170),local_60,param_3);
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = uVar2 & 0xffff | 0x20000;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar3);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  }
  if ((local_60[3] != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_60[2] = 0x70f683;
  local_60[3] = 0;
  if (local_60[4] != 0) {
    (**(code **)(*(long *)(local_60[4] + 0x48) + 0x18))();
  }
  local_60[4] = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


