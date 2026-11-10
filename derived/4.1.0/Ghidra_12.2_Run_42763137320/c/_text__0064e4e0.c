/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064e4e0; name: FUN_.text__0064e4e0
 */


void FUN__text__0064e4e0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0xf0);
    uVar3 = (**(code **)(*(long *)*puVar7 + 0x40))();
    lVar1 = 0x18;
    if ((uVar3 & 1) == 0) {
      lVar1 = 0x10;
    }
    iVar2 = (**(code **)(*(long *)*puVar7 + lVar1))((long *)*puVar7);
    if (iVar2 == 1) {
      puVar5 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)puVar7[1] + 0x18))((long *)puVar7[1],puVar5,puVar7[2],puVar7[3]);
      }
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) * 0x20);
      if (puVar7 + 4 != puVar5) {
        puVar7 = puVar7 + 3;
        do {
          uVar4 = puVar7[1];
          puVar7[1] = 0;
          puVar6 = (undefined8 *)puVar7[-3];
          puVar7[-3] = uVar4;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6);
            (**(code **)(*(long *)puVar7[-2] + 0x18))((long *)puVar7[-2],puVar6,puVar7[-1],*puVar7);
          }
          *puVar7 = puVar7[4];
          puVar7[-2] = puVar7[2];
          puVar7[-1] = puVar7[3];
          puVar6 = puVar7 + 5;
          puVar7 = puVar7 + 4;
        } while (puVar6 != puVar5);
      }
      puVar7 = (undefined8 *)puVar5[-4];
      puVar5[-4] = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(*(long *)puVar5[-3] + 0x18))((long *)puVar5[-3],puVar7,puVar5[-2],puVar5[-1]);
      }
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + -1;
    }
  }
  return;
}


