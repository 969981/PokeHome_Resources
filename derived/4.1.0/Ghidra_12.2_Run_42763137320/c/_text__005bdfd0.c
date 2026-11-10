/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bdfd0; name: FUN_.text__005bdfd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bdfd0(ulong param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_270 [528];
  
  uVar4 = _DAT_008a0208;
  puVar9 = _DAT_008a0200;
  pbVar2 = _DAT_008a01f8;
  lVar8 = *(long *)(param_1 + 0x620);
  lVar1 = param_1 + 0x20;
  if (lVar8 != 3) {
    uVar6 = param_1;
    do {
      lVar7 = *(long *)(param_1 + 0x7e8);
      if (*(long *)(param_1 + 0x7f0) == lVar7) {
        FUN__text__005c1060(param_1 + 0x7e8);
        goto LAB__text__005be15c;
      }
      if (((*pbVar2 & 1) == 0) && (uVar6 = __cxa_guard_acquire(pbVar2), (int)uVar6 != 0)) {
        *puVar9 = 0xcbf29ce484222645;
        puVar9[1] = 0x70f683;
        puVar9[2] = 0;
        puVar9[3] = 0;
        FUN__text__001001d0(uVar4,puVar9,&__DT_FINI_ARRAY,lVar8);
        uVar6 = __cxa_guard_release(pbVar2);
      }
      if (*(long *)(param_1 + 0x620) == 3) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(uVar6,lVar7);
      }
      uVar6 = FUN__text__005d51dc(lVar1 + *(long *)(param_1 + 0x620) * 0x200,lVar7,4,lVar8,puVar9);
      lVar8 = *(long *)(param_1 + 0x620) + 1;
      *(long *)(param_1 + 0x620) = lVar8;
    } while (lVar8 != 3);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x7e8);
  param_3 = (uint *)(ulong)*param_3;
  if (param_3 < (uint *)(*(long *)(param_1 + 0x7f0) - (long)puVar9 >> 9)) {
    param_1 = (ulong)*param_2;
    if ((*pbVar2 & 1) != 0) goto LAB__text__005be038;
  }
  else {
LAB__text__005be15c:
    FUN__text__005c1060(param_1 + 0x7e8);
  }
  iVar5 = __cxa_guard_acquire(_DAT_008a01f8);
  puVar3 = _DAT_008a0200;
  if (iVar5 != 0) {
    *_DAT_008a0200 = 0xcbf29ce484222645;
    puVar3[1] = 0x70f683;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN__text__001001d0(_DAT_008a0208,puVar3,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_008a01f8);
  }
LAB__text__005be038:
  FUN__text__005d51dc(auStack_270,puVar9 + (long)param_3 * 0x40,4,param_1 & 0xffffffff,_DAT_008a0200
                     );
  FUN__text__0014d25c(lVar1 + (long)(int)*param_2 * 0x200,auStack_270);
  FUN__text__0014821c(auStack_270);
  return;
}


