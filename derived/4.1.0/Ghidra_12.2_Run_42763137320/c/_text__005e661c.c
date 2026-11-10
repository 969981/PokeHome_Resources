/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e661c; name: FUN_.text__005e661c
 */


void FUN__text__005e661c(undefined1 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    uVar2 = FUN__text__005f52b0();
    param_1[0x38] = 0;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (uVar1 != 0) goto LAB__text__005e6698;
  }
  else {
    param_1[0x38] = 0;
    *(long *)(param_1 + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB__text__005e6698:
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
      if (lVar3 != 0) goto LAB__text__005e66b0;
    }
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__005e66b0:
  *(long *)(param_1 + 0x58) = lVar3;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x70,0,1);
  param_1[0x72] = 0x4f;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  return;
}


