/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156c94; name: FUN_.text__00156c94
 */


undefined8 FUN__text__00156c94(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = (long)param_1 - *param_2;
  if ((((uVar7 & 3) == 0) && (uVar8 = param_2[1], 4 < uVar8)) && (uVar7 <= uVar8 - 4)) {
    lVar5 = param_2[2];
    uVar1 = (int)lVar5 + 1;
    iVar4 = *param_1;
    uVar2 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 2) = uVar1;
    *(uint *)(param_2 + 3) = uVar2;
    if (((((uVar1 <= *(uint *)((long)param_2 + 0x14)) && (uVar2 <= *(uint *)((long)param_2 + 0x1c)))
         && ((uVar9 = uVar7 - (long)iVar4, (uVar9 & 1) == 0 &&
             ((uVar9 <= uVar8 - 2 && (uVar3 = *(ushort *)(*param_2 + uVar9), (uVar3 & 1) == 0))))))
        && (uVar3 < uVar8)) && (uVar9 <= uVar8 - uVar3)) {
      puVar6 = (ushort *)((long)param_1 - (long)*param_1);
      if ((*puVar6 < 5) ||
         ((((ulong)puVar6[2] == 0 || ((8 < uVar8 && (uVar7 + puVar6[2] <= uVar8 - 8)))) &&
          ((*puVar6 < 7 ||
           (((ulong)puVar6[3] == 0 || ((8 < uVar8 && (uVar7 + puVar6[3] <= uVar8 - 8)))))))))) {
        *(int *)(param_2 + 2) = (int)lVar5;
        return 1;
      }
    }
  }
  return 0;
}


