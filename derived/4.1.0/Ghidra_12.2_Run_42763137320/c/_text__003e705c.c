/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e705c; name: FUN_.text__003e705c
 */


void FUN__text__003e705c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar4;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  pcVar2 = *(code **)(param_1 + 0x78);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    (*pcVar2)(param_1 + 0x90);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
  }
  pcVar2 = *(code **)(param_1 + 0xf8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (*pcVar2)(param_1 + 0x110);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x110);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
  }
  uVar3 = FUN__text__003e5edc(*(undefined8 *)(param_1 + 0x68));
  FUN__text__0069bb80(*(undefined8 *)(param_1 + 0x58),uVar3);
  return;
}


