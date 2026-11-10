/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052b1ac; name: FUN_.text__0052b1ac
 */


bool FUN__text__0052b1ac(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = 0x18;
  if (*(char *)((long)param_1 + 0x29) != '\0') {
    lVar2 = 0x20;
  }
  lVar2 = (**(code **)(*param_1 + lVar2))();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0xf8) = 0;
    uVar1 = *param_2;
    uVar3 = param_2[2];
    *(undefined8 *)(lVar2 + 0xe8) = param_2[1];
    *(undefined8 *)(lVar2 + 0xf0) = uVar3;
    *(undefined8 *)(lVar2 + 0xe0) = uVar1;
    uVar1 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 8) = uVar1;
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    *(undefined4 *)(lVar2 + 0x110) = 0x42c80000;
    *(undefined2 *)((long)param_1 + 0x29) = 1;
  }
  return lVar2 != 0;
}


