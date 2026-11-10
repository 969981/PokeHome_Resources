/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c522c; name: FUN_.text__002c522c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c522c(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *__s;
  undefined8 *puVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x58);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x39d0,0x10);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) != 0x10) {
    *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__002c5d10();
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    puVar3 = *(undefined8 **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                (*(long **)(lVar1 + 0x10),puVar3,*(undefined8 *)(lVar1 + 0x18),
                 *(undefined8 *)(lVar1 + 0x20));
      uVar2 = *(undefined8 *)(lVar1 + 8);
    }
    *(long **)(lVar1 + 0x10) = param_2;
    *(undefined8 *)(lVar1 + 0x18) = 0x39d0;
    *(undefined8 *)(lVar1 + 0x20) = 0x10;
    FUN__text__002c6198(uVar2,param_2);
    __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x850,0x10);
    if (*(long *)(uVar4 + 0x98) != 0x10) {
      *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      memset(__s,0,0x850);
      *__s = _DAT_008a2568 + 0x10;
      __s[0x14] = 0;
      __s[0x15] = 0;
      __s[0x16] = 0;
      __s[0x17] = 0;
      __s[4] = 0;
      __s[5] = 0;
      __s[6] = 0;
      __s[7] = 0;
      __s[2] = 0x867938;
      __s[3] = 0;
      memset(__s + 0x25,0,0x71c);
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
      puVar3 = *(undefined8 **)(lVar1 + 0x28);
      *(long **)(lVar1 + 0x28) = __s;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(**(long **)(lVar1 + 0x30) + 0x18))
                  (*(long **)(lVar1 + 0x30),puVar3,*(undefined8 *)(lVar1 + 0x38),
                   *(undefined8 *)(lVar1 + 0x40));
        __s = *(long **)(lVar1 + 0x28);
      }
      *(undefined8 *)(lVar1 + 0x40) = 0x10;
      *(long **)(lVar1 + 0x30) = param_2;
      *(undefined8 *)(lVar1 + 0x38) = 0x850;
      FUN__text__002c5870(__s,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


