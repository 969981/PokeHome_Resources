/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00562530; name: FUN_.text__00562530
 */


undefined8 FUN__text__00562530(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(uint *)(param_1 + 0x1a4) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                      (*(long **)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x1a4) * 0x18,0x711e87,
                       0xb2);
    *(long *)(param_1 + 0xf8) = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0x1a4);
    if (*(uint *)(param_1 + 0x1a4) == 0) {
      uVar6 = 0;
      cVar3 = *(char *)(param_1 + 0x149);
      goto joined_r0x005625cc;
    }
    lVar4 = 0;
    uVar7 = 0;
    do {
      if (*(long *)(param_1 + 0xf8) != 0) {
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0xf8) + lVar4);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1[4] = 0;
        uVar6 = (ulong)*(uint *)(param_1 + 0x1a4);
      }
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar7 < uVar6);
  }
  cVar3 = *(char *)(param_1 + 0x149);
joined_r0x005625cc:
  if (((cVar3 != '\0') && (*(char *)(param_1 + 0x1ac) != '\0')) && (uVar6 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x144);
    lVar4 = 0;
    uVar6 = 0;
    do {
      uVar5 = FUN__text__005635b4(*(long *)(param_1 + 0xf8) + lVar4,*(undefined8 *)(param_1 + 0x10),
                                  uVar2);
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar6 < *(uint *)(param_1 + 0x1a4));
  }
  return 1;
}


