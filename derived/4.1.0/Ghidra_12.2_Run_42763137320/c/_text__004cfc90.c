/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfc90; name: FUN_.text__004cfc90
 */


void FUN__text__004cfc90(float param_1,long param_2,uint param_3,ulong param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 local_40;
  uint local_38;
  
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 != (long *)0x0) {
    pbVar5 = *(byte **)(param_2 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      bVar1 = *pbVar5;
      uVar6 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar6 = 1;
      }
      uVar4 = (ulong)uVar6;
      pfVar7 = (float *)(pbVar5 + ((ulong)bVar1 & 0xf8) + 8);
      do {
        pbVar5 = pbVar5 + 1;
        if ((uint)*pbVar5 == (param_3 & 0xff)) goto LAB__text__004cfcfc;
        pfVar7 = pfVar7 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    pfVar7 = (float *)0x0;
LAB__text__004cfcfc:
    if ((ulong)param_3 == 0xb) {
      lVar3 = *(long *)(param_2 + 0x10);
      local_38 = CONCAT31(local_38._1_3_,lVar3 == 0) | 0x3c;
      local_40 = plVar2;
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 200))(param_1,plVar2,&local_40,0);
        *pfVar7 = param_1;
      }
      else {
        (**(code **)(*plVar2 + 0xd0))(param_1,plVar2,lVar3,&local_40,0);
        *pfVar7 = param_1;
      }
    }
    else {
      local_40 = (long *)CONCAT26((short)((ulong)local_40 >> 0x30),0x100000000);
      local_38 = 0;
      (**(code **)(*plVar2 + 0x238))
                (param_1,param_1 - *pfVar7,plVar2,*(undefined4 *)((ulong)param_3 * 4 + 0x73b2b0),
                 &local_40,*(undefined8 *)(param_2 + 0x10));
      *pfVar7 = param_1;
    }
    if ((param_4 & 1) != 0) {
      pfVar7[2] = 0.0;
      pfVar7[3] = 0.0;
    }
  }
  return;
}


