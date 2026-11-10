/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064e340; name: FUN_.text__0064e340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064e340(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar2 = _DAT_0089f520;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar3 = *_DAT_0089f520;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xf8) == 0)) {
LAB__text__0064e3e8:
      if (*(long *)(param_1 + 0xf8) != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0xf0);
        lVar3 = *(long *)(param_1 + 0xf8) << 5;
        do {
          puVar4 = (undefined8 *)*puVar5;
          *puVar5 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],puVar4,puVar5[2],puVar5[3]);
          }
          puVar5 = puVar5 + 4;
          lVar3 = lVar3 + -0x20;
        } while (lVar3 != 0);
        lVar3 = *(long *)(param_1 + 0xf8);
        if (lVar3 != 0) {
          puVar5 = *(undefined8 **)(param_1 + 0xf0);
          do {
            puVar4 = (undefined8 *)*puVar5;
            *puVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4);
              (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],puVar4,puVar5[2],puVar5[3])
              ;
            }
            lVar3 = lVar3 + -1;
            puVar5 = puVar5 + 4;
          } while (lVar3 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      lVar6 = *(long *)(lVar3 + 0xf8) << 5;
      puVar5 = *(undefined8 **)(lVar3 + 0xf0);
      do {
        (**(code **)(*(long *)*puVar5 + 0x28))();
        lVar6 = lVar6 + -0x20;
        puVar5 = puVar5 + 4;
      } while (lVar6 != 0);
      *(undefined4 *)(param_1 + 0x60) = 0;
      do {
        if ((*plVar2 == 0) || (*(long *)(*plVar2 + 0xf8) == 0)) goto LAB__text__0064e3e8;
        FUN__text__0064e4e0(param_1);
        nn::os::SleepThread(100000000);
        uVar1 = *(int *)(param_1 + 0x60) + 1;
        *(uint *)(param_1 + 0x60) = uVar1;
      } while (uVar1 < 0x3a99);
    }
  }
  return;
}


