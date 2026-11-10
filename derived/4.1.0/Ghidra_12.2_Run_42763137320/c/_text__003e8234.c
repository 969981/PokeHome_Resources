/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e8234; name: FUN_.text__003e8234
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e8234(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long *local_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  FUN__text__005a7c38(param_1,0,0);
  param_1[0x16] = 0;
  lVar6 = _DAT_008a5260;
  *(undefined2 *)(param_1 + 0x17) = 0x100;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = lVar6 + 0x10;
  param_1[9] = lVar6 + 0x98;
  param_1[10] = lVar6 + 0xd8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN__text__0069dc48(param_1 + 0x1c);
  param_1[0x56] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((long)param_1 + 0x2b5) = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 1;
  param_1[0x5b] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5f] = -0x100000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar6 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar6 != 0) goto LAB__text__003e831c;
  }
  lVar6 = FUN__text__005f52b0();
LAB__text__003e831c:
  param_1[0x6c] = lVar6;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  lVar6 = FUN__text__003ea230(&uStack_22,param_1[1]);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (param_1[0x59] != 0) {
    (**(code **)(*(long *)(param_1[0x59] + 0x48) + 0x18))();
  }
  param_1[0x59] = lVar6;
  if (lVar6 != 0) {
    pcVar7 = *(code **)(lVar6 + 0x118);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x120) = 0;
      *(undefined8 *)(lVar6 + 0x128) = 0;
      *(undefined8 *)(lVar6 + 0x110) = 0;
      *(undefined8 *)(lVar6 + 0x118) = 0;
      (*pcVar7)(lVar6 + 0x130);
    }
    uVar4 = _DAT_008a5280;
    uVar3 = _DAT_008a5278;
    uVar2 = _DAT_008a5270;
    *(undefined8 *)(lVar6 + 0x130) = _DAT_008a5268;
    uVar5 = _DAT_008a5288;
    *(undefined8 *)(lVar6 + 0x110) = uVar2;
    *(undefined8 *)(lVar6 + 0x118) = uVar3;
    *(undefined8 *)(lVar6 + 0x120) = uVar4;
    *(undefined8 *)(lVar6 + 0x128) = uVar5;
  }
  param_1[0x14] =
       param_1[0x14] & 0xffffe00000000000U |
       param_1[0x14] & 0x1fffffffffU | (ulong)*(byte *)((long)param_1 + 700) << 0x25;
  local_30 = param_1;
  lVar6 = FUN__text__003ea498(&uStack_21,param_1[1],&local_30);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar6 + 0x268) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
  }
  param_1[0xe] = lVar6;
  return;
}


