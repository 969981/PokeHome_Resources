/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00166508; name: FUN_.text__00166508
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00166508(long param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5
                        ,undefined4 param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN__text__0015a550(*(undefined8 *)(param_1 + 0x170),param_3,param_4,param_5,param_6);
  uVar3 = FUN__text__001589ac(*_DAT_0089f538,param_3);
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    uVar1 = 0x40000;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    puVar2 = &LAB__text__00220000;
    if (param_3 != 0) {
      puVar2 = (undefined1 *)0x20000;
    }
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = uVar1 | (ulong)puVar2;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar4);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
  }
  return;
}


