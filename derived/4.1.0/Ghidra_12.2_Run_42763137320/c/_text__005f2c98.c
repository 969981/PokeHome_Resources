/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2c98; name: FUN_.text__005f2c98
 */


void FUN__text__005f2c98(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar4;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  pcVar2 = *(code **)(param_1 + 200);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    (*pcVar2)(param_1 + 0xe0);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0xe0);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
  }
  pcVar2 = *(code **)(param_1 + 0x148);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*pcVar2)(param_1 + 0x160);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x160);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x158) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x140) = uVar3;
  }
  return;
}


