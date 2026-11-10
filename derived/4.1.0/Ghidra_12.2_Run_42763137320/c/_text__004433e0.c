/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004433e0; name: FUN_.text__004433e0
 */


void FUN__text__004433e0(long param_1,uint *param_2,long *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    if ((((param_2[2] == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) &&
       (((*(long *)(param_2 + 8) == 0 && (*(char *)(param_1 + 0x10) != '\0')) && (*param_3 != 0))))
    {
      FUN__text__004449ec(*(undefined8 *)(param_1 + 8));
      uVar2 = *param_2;
      if (uVar2 != 0) goto LAB__text__00443410;
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar7 = 0;
      do {
        puVar4 = (uint *)(*(long *)(param_1 + 0x18) + lVar7);
        *param_4 = *puVar4;
        FUN__text__00443520(puVar4,param_2 + 2,param_3,param_4 + 2);
        lVar7 = lVar7 + 0x28;
      } while ((ulong)uVar2 * 0x28 != lVar7);
    }
  }
  else {
LAB__text__00443410:
    uVar5 = *(uint *)(param_1 + 0x20);
    if (uVar5 != 0) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 + (uVar5 >> 1);
        puVar4 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
        uVar3 = *puVar4;
        if (uVar3 == uVar2) {
          *param_4 = uVar2;
          FUN__text__00443520(puVar4,param_2 + 2,param_3,param_4 + 2);
          break;
        }
        if (uVar3 < uVar2) {
          iVar6 = iVar1 + 1;
        }
        uVar3 = uVar5 - (uVar3 < uVar2);
        uVar5 = uVar3 >> 1;
      } while (1 < uVar3);
    }
  }
  *param_4 = 0;
  return;
}


