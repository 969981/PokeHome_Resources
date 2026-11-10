/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c1610; name: FUN_.text__002c1610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c1610(float param_1,float param_2,long param_3,uint *param_4,uint param_5,
                        ulong param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  uint local_74;
  long local_48;
  
  if (*(char *)((long)param_4 + 0xd) != '\0') {
    return;
  }
  lVar7 = param_3 + 100;
  puVar4 = (uint *)FUN__text__002c11d0(lVar7,param_4,param_5 & 1,&local_74);
  if (puVar4 == (uint *)0x0) {
    return;
  }
  if ((param_5 & 1) == 0) {
    uVar3 = *param_4;
    uVar2 = param_4[1];
    lVar8 = *(long *)(*_DAT_0089f4f8 + 0x50);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN__text__002a5f64(&local_48,lVar8);
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    uVar5 = FUN__text__002c53f0(local_48);
    uVar3 = FUN__text__002c5c20(uVar5,uVar3,(short)uVar2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    if ((uVar3 - 0x5c9 < 0xfffffa38) ||
       ((*(byte *)(lVar7 + (ulong)uVar3 * 0x18 + 0x151ad) & 0x33) == 0)) {
      puVar4[2] = (uint)param_1;
      pfVar6 = (float *)(puVar4 + 4);
    }
    else if ((*(byte *)(lVar7 + (ulong)uVar3 * 0x18 + 0x151a8) & 1) == 0) {
      fVar9 = (float)puVar4[2];
      *puVar4 = *puVar4 | 1;
      pfVar6 = (float *)(puVar4 + 3);
      if (param_1 < fVar9) {
        puVar4[3] = (uint)fVar9;
        pfVar6 = (float *)(puVar4 + 2);
      }
      *pfVar6 = param_1;
      fVar9 = (float)puVar4[4];
      pfVar6 = (float *)(puVar4 + 5);
      if (param_2 < fVar9) {
        puVar4[5] = (uint)fVar9;
        pfVar6 = (float *)(puVar4 + 4);
      }
    }
    else {
      pfVar6 = (float *)(puVar4 + 2);
      if ((param_1 < *pfVar6) || (pfVar6 = (float *)(puVar4 + 3), *pfVar6 < param_1)) {
        *pfVar6 = param_1;
      }
      pfVar6 = (float *)(puVar4 + 4);
      if ((*pfVar6 <= param_2) && (pfVar6 = (float *)(puVar4 + 5), param_2 <= *pfVar6))
      goto LAB__text__002c1788;
    }
    *pfVar6 = param_2;
  }
LAB__text__002c1788:
  bVar1 = (byte)(1 << (ulong)(local_74 & 0x1f));
  *(byte *)((long)puVar4 + 5) = *(byte *)((long)puVar4 + 5) | bVar1;
  if ((param_6 & 1) != 0) {
    *(byte *)((long)puVar4 + 6) = *(byte *)((long)puVar4 + 6) | bVar1;
  }
  uVar3 = *param_4;
  if ((((int)uVar3 < 0x3d5) && (lVar7 = lVar7 + (ulong)uVar3 * 0x58, *(short *)(lVar7 + 0x7a) != 0))
     && ((*(uint *)(lVar7 + 0x70) >> 1 & 1) == 0)) {
    FUN__text__002c12f0(param_3,(ulong)uVar3,(short)param_4[1],param_4[2] == 1,(char)param_4[3],
                        param_5 & 1);
  }
  return;
}


