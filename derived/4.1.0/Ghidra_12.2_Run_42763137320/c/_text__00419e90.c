/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419e90; name: FUN_.text__00419e90
 */


float FUN__text__00419e90(undefined8 param_1,long *param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_7c;
  float local_78;
  undefined4 local_74;
  
  plVar4 = (long *)FUN__text__004329c0(param_2,param_3);
  if ((long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8) == plVar4) {
    fVar10 = 0.0;
  }
  else {
    cVar3 = *(char *)(*plVar4 + 0xc);
    cVar2 = '\x02';
    if (cVar3 == '\x05' || cVar3 == '\x03') {
      cVar2 = cVar3;
    }
    fVar10 = 1.0;
    if (cVar2 != '\x03') {
      fVar10 = 0.0;
    }
    do {
      puVar5 = (undefined4 *)*plVar4;
      if (puVar5[2] != param_3) {
        return fVar10;
      }
      local_7c = 0.0;
      FUN__text__00434be0(param_1,(ulong)CONCAT14(*(undefined1 *)((long)puVar5 + 0xd),*puVar5),
                          param_4,&local_7c,0);
      fVar8 = local_7c;
      lVar6 = *plVar4;
      if (*(float *)(lVar6 + 0x30) == local_7c) {
        fVar7 = *(float *)(lVar6 + 0x38);
joined_r0x0041a010:
        if (fVar7 == 3.4028235e+38) goto LAB__text__0041a014;
      }
      else {
        if (*(float *)(lVar6 + 0x34) == local_7c) {
          fVar7 = *(float *)(lVar6 + 0x3c);
          goto joined_r0x0041a010;
        }
LAB__text__0041a014:
        if (*(long *)(lVar6 + 0x18) == 0) {
          fVar7 = 0.0;
        }
        else {
          local_74 = *(undefined4 *)(lVar6 + 0x28);
          local_78 = 0.0;
          FUN__text__0041a060(local_7c,(long *)(lVar6 + 0x18),&local_74,&local_78);
          *(undefined4 *)(lVar6 + 0x28) = local_74;
          fVar7 = local_78;
        }
        lVar1 = lVar6 + (ulong)*(byte *)(lVar6 + 0x14) * 4;
        *(byte *)(lVar6 + 0x14) = *(byte *)(lVar6 + 0x14) ^ 1;
        *(float *)(lVar1 + 0x30) = fVar8;
        *(float *)(lVar1 + 0x38) = fVar7;
      }
      fVar8 = fVar10;
      if (fVar10 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar9 = fVar7;
      if (cVar2 != '\x03') {
        fVar9 = 1.0;
      }
      if (cVar2 != '\x02') {
        fVar7 = 0.0;
      }
      plVar4 = plVar4 + 1;
      fVar9 = fVar10 * fVar9;
      fVar10 = fVar8;
      if (cVar2 != '\x05') {
        fVar10 = fVar7 + fVar9;
      }
    } while (plVar4 != (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8));
  }
  return fVar10;
}


