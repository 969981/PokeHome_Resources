/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063aa10; name: FUN_.text__0063aa10
 */


void FUN__text__0063aa10(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x78));
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x70));
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x68));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x68));
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x60));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x60));
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x58));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    uVar2 = FUN__text__00631174(*(undefined8 *)(param_1 + 0x58));
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}


