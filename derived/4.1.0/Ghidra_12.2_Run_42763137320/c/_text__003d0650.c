/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d0650; name: FUN_.text__003d0650
 */


void FUN__text__003d0650(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN__text__003cf5e8();
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x6e] = 0x8677a8;
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  param_1[0x6f] = uVar2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *param_1 = 0x884570;
  param_1[0x6e] = 0x884590;
  param_1[0x77] = 0x8845c8;
  return;
}


