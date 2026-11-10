/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cb350; name: FUN_.text__003cb350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003cb350(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x130);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    (*pcVar2)(param_1 + 0x148);
  }
  *(long *)(param_1 + 0x18) = _DAT_0089f820 + 0x10;
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    pcVar2 = *(code **)(param_1 + 0xb0);
  }
  else {
    FUN__text__005d9290();
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0xb0);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    (*pcVar2)(param_1 + 200);
  }
  pcVar2 = *(code **)(param_1 + 0x30);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    (*pcVar2)(param_1 + 0x48);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


