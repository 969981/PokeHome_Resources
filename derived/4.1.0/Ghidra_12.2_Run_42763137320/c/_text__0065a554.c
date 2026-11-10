/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a554; name: FUN_.text__0065a554
 */


uint FUN__text__0065a554(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_150 [256];
  
  uVar1 = (uint)param_2;
  if ((*(ushort *)(param_1 + 0x15a4) >> 0xb & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    FUN__text__0064f3cc(lVar5);
    FUN__text__00670730(param_1,lVar5);
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if ((uVar1 < 0x2b) && ((1L << (param_2 & 0x3f) & 0x40004800000U) != 0)) {
      param_3 = 1;
    }
    pcVar3 = *(code **)(*(long *)(lVar5 + 0x420) + 0x18);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(lVar5,param_2 & 0xffffffff,param_3 & 1);
    }
    uVar6 = 0x2a;
    if (uVar1 != 0x2a) {
      iVar2 = FUN__text__00665dbc(lVar5);
      uVar6 = 0x2a;
      if (iVar2 == 0 || uVar1 != 0) {
        uVar6 = uVar1;
      }
    }
    FUN__text__0065cb00(*(undefined8 *)(param_1 + 0xd8));
    if ((*(long *)(lVar5 + 0x4c0) == 0) && (*(long *)(lVar5 + 0x4e0) == 0)) {
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 0x800;
      if (*(long *)(lVar5 + 0x68) != 0) {
        FUN__text__00654bac(param_1);
        *(undefined8 *)(lVar5 + 0x68) = 0;
      }
      FUN__text__00654514(param_1);
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1138));
      *(undefined8 *)(param_1 + 0x1138) = 0;
      if (*(int *)(param_1 + 0x1168) != 0) {
        uVar7 = 0;
        puVar4 = (undefined8 *)(param_1 + 0x1170);
        do {
          FUN__text__006783e4(*puVar4);
          uVar7 = uVar7 + 1;
          puVar4 = puVar4 + 3;
        } while (uVar7 < *(uint *)(param_1 + 0x1168));
      }
      *(undefined4 *)(param_1 + 0x1168) = 0;
      if ((((*(byte *)(param_1 + 0xf43) >> 4 & 1) == 0) &&
          (uVar1 = *(uint *)(lVar5 + 0x3fc), (uVar1 & 1) == 0)) &&
         (((param_3 & 1) == 0 || ((*(byte *)(*(long *)(lVar5 + 0x420) + 0x85) >> 1 & 1) != 0)))) {
        memset(auStack_150,0,0x100);
        if ((uVar1 >> 6 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar1 >> 2 & 1) == 0) {
              puVar4 = (undefined8 *)(lVar5 + 0xd8);
            }
            else {
              puVar4 = (undefined8 *)(lVar5 + 0x108);
            }
          }
          else {
            puVar4 = (undefined8 *)(lVar5 + 0x168);
          }
        }
        else {
          puVar4 = (undefined8 *)(lVar5 + 0x128);
        }
        FUN__text__006599c0(auStack_150,0x100,0x70e8ca,*(undefined8 *)(lVar5 + 0x60),*puVar4);
        uVar7 = FUN__text__00651414(lVar5);
        if ((uVar7 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x1118) = 0xffffffffffffffff;
        }
        else {
          *(undefined8 *)(param_1 + 0x1118) = *(undefined8 *)(lVar5 + 0x60);
          FUN__text__00666f74(param_1,0x70e891,auStack_150);
        }
      }
      else {
        uVar1 = FUN__text__00670414(param_1,lVar5,param_3 & 1);
        if (uVar1 == 0 || uVar6 != 0) {
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      FUN__text__00670084(param_1);
    }
    else {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


