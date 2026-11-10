/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e3e10; name: FUN_.text__005e3e10
 */


void FUN__text__005e3e10(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  plVar5 = (long *)(param_1 + 0xe8);
  FUN__text__005e4600(param_1 + 0x118,*(long *)(param_1 + 0xf0) - *plVar5 >> 3);
  puVar8 = *(undefined8 **)(param_1 + 0xf0);
  puVar4 = (undefined8 *)*plVar5;
  if ((undefined8 *)*plVar5 != puVar8) {
    do {
      do {
        puVar7 = puVar4 + 1;
        puVar4 = (undefined8 *)*puVar4;
        uVar6 = puVar4[4];
        plVar2 = (long *)puVar4[1];
        uVar1 = puVar4[2];
        uVar3 = puVar4[3];
        (**(code **)*puVar4)();
        (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6);
        (**(code **)(*plVar2 + 0x90))(plVar2);
        puVar4 = puVar7;
      } while (puVar7 != puVar8);
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe8);
      if (*(long *)(param_1 + 0x118) == *(long *)(param_1 + 0x120)) break;
      FUN__text__005e4600(plVar5,*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 3);
      FUN__text__005e5010(plVar5,*(undefined8 *)(param_1 + 0xe8),*(long *)(param_1 + 0x118),
                          *(long *)(param_1 + 0x120),
                          *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 3);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
      puVar4 = *(undefined8 **)(param_1 + 0xe8);
      puVar8 = *(undefined8 **)(param_1 + 0xf0);
    } while (puVar4 != puVar8);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


