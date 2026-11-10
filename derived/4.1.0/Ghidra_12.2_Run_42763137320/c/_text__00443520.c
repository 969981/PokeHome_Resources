/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00443520; name: FUN_.text__00443520
 */


void FUN__text__00443520(long param_1,uint *param_2,long *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  
  uVar4 = *param_2;
  puVar7 = param_2 + 2;
  if ((uVar4 == 0) && ((char)*puVar7 == -1)) {
    if (((char)param_2[4] == -1) &&
       (((*(long *)(param_2 + 6) == 0 && (*(char *)(param_1 + 0x10) != '\0')) && (*param_3 != 0))))
    {
      FUN__text__004449ec(*(undefined8 *)(param_1 + 8));
      uVar4 = *param_2;
      goto LAB__text__00443590;
    }
  }
  else {
LAB__text__00443590:
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_1 + 0x20);
      if (uVar5 != 0) {
        iVar6 = 0;
        do {
          iVar1 = iVar6 + (uVar5 >> 1);
          puVar3 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
          uVar2 = *puVar3;
          if (uVar2 == uVar4) {
            *param_4 = uVar4;
            FUN__text__00443660(puVar3,puVar7,param_3,param_4 + 2);
            break;
          }
          if (uVar2 < uVar4) {
            iVar6 = iVar1 + 1;
          }
          uVar2 = uVar5 - (uVar2 < uVar4);
          uVar5 = uVar2 >> 1;
        } while (1 < uVar2);
      }
      goto LAB__text__00443644;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar4) {
    lVar8 = 0;
    do {
      puVar3 = (uint *)(*(long *)(param_1 + 0x18) + lVar8);
      *param_4 = *puVar3;
      FUN__text__00443660(puVar3,puVar7,param_3,param_4 + 2);
      lVar8 = lVar8 + 0x28;
    } while ((ulong)uVar4 * 0x28 != lVar8);
  }
LAB__text__00443644:
  *param_4 = 0;
  return;
}


