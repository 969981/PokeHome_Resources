/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001643f0; name: FUN_.text__001643f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001643f0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                        byte param_5)

{
  short sVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  byte bVar10;
  short local_38 [2];
  short local_34 [2];
  
  psVar6 = (short *)FUN__text__005f3244(param_3);
  puVar2 = _DAT_0089f538;
LAB__text__00164450:
  do {
    for (; sVar1 = *psVar6, sVar1 != 0x10; psVar6 = psVar6 + 1) {
      if (sVar1 == 0) {
        return;
      }
      local_38[0] = sVar1;
      if ((param_5 & 1) == 0) {
LAB__text__00164488:
        param_5 = 0;
      }
      else {
        param_5 = 1;
        uVar7 = FUN__text__00157130(sVar1,1);
        if ((uVar7 & 1) == 0) {
          FUN__text__001589c8(*puVar2,local_38);
          goto LAB__text__00164488;
        }
      }
      FUN__text__005f335c(param_2,local_38[0]);
    }
    uVar7 = FUN__text__0015a030(psVar6);
    if ((uVar7 & 1) != 0) {
      psVar8 = (short *)FUN__text__005f3780(psVar6);
      for (psVar9 = psVar6; psVar6 = psVar8, psVar9 < psVar8; psVar9 = psVar9 + 1) {
        FUN__text__005f335c(param_2,*psVar9);
      }
      goto LAB__text__00164450;
    }
    uVar7 = FUN__text__0015a0f0(psVar6);
    if (((((uVar7 & 1) == 0) && (uVar7 = FUN__text__0015a150(psVar6), (uVar7 & 1) == 0)) &&
        (uVar7 = FUN__text__0015a1b0(psVar6), (uVar7 & 1) == 0)) &&
       (uVar7 = FUN__text__0015a2e0(psVar6), (uVar7 & 1) == 0)) {
      uVar7 = FUN__text__0015a360(psVar6);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN__text__0015a410(psVar6);
        if ((uVar7 & 1) != 0) {
          psVar6 = (short *)FUN__text__00164a70(param_1,param_2,psVar6);
          goto LAB__text__00164450;
        }
        uVar7 = FUN__text__0015a450(psVar6);
        if ((uVar7 & 1) != 0) {
          psVar6 = (short *)FUN__text__00164c80(param_1,param_2,psVar6);
          goto LAB__text__00164450;
        }
        uVar7 = FUN__text__0015a3d0(psVar6);
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN__text__0015a490(psVar6);
          if ((uVar7 & 1) == 0) {
            psVar8 = (short *)FUN__text__005f3780(psVar6);
            for (psVar9 = psVar6; psVar6 = psVar8, psVar9 < psVar8; psVar9 = psVar9 + 1) {
              local_34[0] = *psVar9;
              if ((param_5 & 1) == 0) {
LAB__text__00164660:
                param_5 = 0;
              }
              else {
                param_5 = 1;
                uVar7 = FUN__text__00157130(local_34[0],1);
                if ((uVar7 & 1) == 0) {
                  FUN__text__001589c8(*puVar2,local_34);
                  goto LAB__text__00164660;
                }
              }
              FUN__text__005f335c(param_2,local_34[0]);
            }
            goto LAB__text__00164450;
          }
          uVar4 = FUN__text__005f37f0(psVar6,0);
          FUN__text__00601370(*(undefined8 *)(param_1 + 0x170),uVar4);
          psVar9 = (short *)FUN__text__005f3244(*(undefined8 *)(param_1 + 0x170));
          sVar1 = *psVar9;
          while (sVar1 != 0) {
            psVar9 = psVar9 + 1;
            FUN__text__005f335c(param_2);
            sVar1 = *psVar9;
          }
        }
        else {
          cVar3 = FUN__text__0015a010(psVar6);
          param_5 = cVar3 == '\x03';
          cVar3 = FUN__text__0015a010(psVar6);
          if (cVar3 == '\x02') {
            *(ushort *)(param_1 + 0x23c) = *(ushort *)(param_1 + 0x23c) & 0xfffc;
            *(ushort *)(param_1 + 0x244) = *(ushort *)(param_1 + 0x244) | 3;
          }
          else {
            if (cVar3 == '\x01') {
              bVar10 = *(byte *)(param_1 + 0x23e) & 0xe7 | 4;
            }
            else {
              if (cVar3 != '\0') goto LAB__text__00164548;
              bVar10 = *(byte *)(param_1 + 0x23e) & 0xe3;
            }
            *(byte *)(param_1 + 0x23e) = bVar10;
            *(byte *)(param_1 + 0x246) = *(byte *)(param_1 + 0x246) | 0x1c;
          }
        }
      }
      else {
        uVar4 = FUN__text__005f37f0(psVar6,0);
        uVar5 = FUN__text__001665d0(*(undefined2 *)(param_1 + 0x238),uVar4);
        if ((uVar5 & 0xffff) != 0) {
          FUN__text__005f335c(param_2,uVar5);
        }
      }
LAB__text__00164548:
      psVar6 = (short *)FUN__text__005f3780(psVar6);
      goto LAB__text__00164450;
    }
    psVar6 = (short *)FUN__text__00164700(param_1,param_2,psVar6,param_4 & 1,param_5 & 1);
    param_5 = 0;
  } while( true );
}


