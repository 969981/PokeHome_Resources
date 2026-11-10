/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192680; name: FUN_.text__00192680
 */


long FUN__text__00192680(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x14);
  uVar7 = 5;
  iVar1 = *param_2;
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  while ((((((uVar6 <= uVar7 - 5 || (lVar5 = *(long *)(param_1 + 0x18), *(int *)(lVar5 + 0x18) == 0)
             ) || (iVar1 != *(int *)(lVar5 + 8) || iVar3 != *(int *)(lVar5 + 0xc))) ||
           ((iVar2 != *(int *)(lVar5 + 0x10) || (iVar4 != *(int *)(lVar5 + 0x14))))) &&
          ((((uVar6 <= uVar7 - 4 ||
             ((lVar5 = *(long *)(param_1 + 0xb8), *(int *)(lVar5 + 0x18) == 0 ||
              (iVar1 != *(int *)(lVar5 + 8))))) ||
            ((iVar3 != *(int *)(lVar5 + 0xc) ||
             ((iVar2 != *(int *)(lVar5 + 0x10) || (iVar4 != *(int *)(lVar5 + 0x14))))))) &&
           (((uVar6 <= uVar7 - 3 ||
             (((lVar5 = *(long *)(param_1 + 0x158), *(int *)(lVar5 + 0x18) == 0 ||
               (iVar1 != *(int *)(lVar5 + 8))) || (iVar3 != *(int *)(lVar5 + 0xc))))) ||
            ((iVar2 != *(int *)(lVar5 + 0x10) || (iVar4 != *(int *)(lVar5 + 0x14))))))))) &&
         ((((uVar6 <= uVar7 - 2 ||
            (((lVar5 = *(long *)(param_1 + 0x1f8), *(int *)(lVar5 + 0x18) == 0 ||
              (iVar1 != *(int *)(lVar5 + 8))) ||
             ((iVar3 != *(int *)(lVar5 + 0xc) ||
              ((iVar2 != *(int *)(lVar5 + 0x10) || (iVar4 != *(int *)(lVar5 + 0x14))))))))) &&
           ((uVar6 <= uVar7 - 1 ||
            ((((lVar5 = *(long *)(param_1 + 0x298), *(int *)(lVar5 + 0x18) == 0 ||
               (iVar1 != *(int *)(lVar5 + 8))) || (iVar3 != *(int *)(lVar5 + 0xc))) ||
             ((iVar2 != *(int *)(lVar5 + 0x10) || (iVar4 != *(int *)(lVar5 + 0x14))))))))) &&
          (((uVar6 <= uVar7 ||
            ((lVar5 = *(long *)(param_1 + 0x338), *(int *)(lVar5 + 0x18) == 0 ||
             (iVar1 != *(int *)(lVar5 + 8))))) ||
           ((iVar3 != *(int *)(lVar5 + 0xc) ||
            ((iVar2 != *(int *)(lVar5 + 0x10) || (iVar4 != *(int *)(lVar5 + 0x14)))))))))))) {
    uVar7 = uVar7 + 6;
    param_1 = param_1 + 0x20;
    if (uVar7 == 0x23) {
      return 0;
    }
  }
  return lVar5;
}


