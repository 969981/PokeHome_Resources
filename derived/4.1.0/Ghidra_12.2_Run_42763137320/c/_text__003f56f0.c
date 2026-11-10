/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f56f0; name: FUN_.text__003f56f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003f56f0(uint param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  void *__dest;
  long lVar6;
  uint local_70 [8];
  
  lVar1 = *_DAT_008a43d8;
  if ((param_1 < DAT_00ae8870) &&
     (plVar2 = *(long **)(DAT_00ae8868 + (ulong)param_1 * 8), plVar2 != (long *)0x0)) {
    if (*(int *)(lVar1 + 0x10) != 0) {
      __dest = *(void **)(lVar1 + 8);
      do {
        while ((**(code **)(*(long *)**(undefined8 **)((long)__dest + 0x10) + 0x18))
                         ((long *)**(undefined8 **)((long)__dest + 0x10),local_70),
              local_70[0] == param_1) {
          (**(code **)(*(long *)**(undefined8 **)((long)__dest + 0x10) + 0x10))();
          **(undefined8 **)((long)__dest + 0x10) = 0;
          lVar6 = *(long *)((long)__dest + 0x10);
          if (lVar6 != 0) {
            if (*(long *)(lVar6 + 0x18) != 0) {
              *(undefined4 *)(lVar6 + 0x20) = 0;
              if (*(long *)(lVar6 + 0x18) != lVar6 + 0x10) {
                FUN__text__00400fc0(0);
              }
              *(undefined8 *)(lVar6 + 0x18) = 0;
              *(undefined4 *)(lVar6 + 0x24) = 0;
              lVar6 = *(long *)((long)__dest + 0x10);
            }
            FUN__text__00400fc0(0,lVar6);
            *(undefined8 *)((long)__dest + 0x10) = 0;
          }
          uVar4 = *(int *)(lVar1 + 0x10) - 1;
          pvVar5 = (void *)(*(long *)(lVar1 + 8) + (ulong)uVar4 * 0x18);
          if (__dest < pvVar5) {
            memmove(__dest,(void *)((long)__dest + 0x18),(ulong)(uint)((int)pvVar5 - (int)__dest));
            uVar4 = *(int *)(lVar1 + 0x10) - 1;
          }
          *(uint *)(lVar1 + 0x10) = uVar4;
          if (__dest == (void *)(*(long *)(lVar1 + 8) + (ulong)uVar4 * 0x18))
          goto LAB__text__003f5850;
        }
        __dest = (void *)((long)__dest + 0x18);
      } while (__dest != (void *)(*(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x10) * 0x18));
LAB__text__003f5850:
      plVar2 = *(long **)(DAT_00ae8868 + (ulong)param_1 * 8);
    }
    (**(code **)(*plVar2 + 0x30))();
    uVar3 = 1;
    *(undefined8 *)(DAT_00ae8868 + (ulong)param_1 * 8) = 0;
  }
  else {
    uVar3 = 0x1f;
  }
  return uVar3;
}


