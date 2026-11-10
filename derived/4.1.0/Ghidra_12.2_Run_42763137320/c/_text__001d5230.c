/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d5230; name: FUN_.text__001d5230
 */


undefined8 FUN__text__001d5230(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char local_64 [4];
  
  lVar9 = *param_1;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_5 + 0x40);
  uVar10 = 0;
  iVar1 = *(int *)(lVar8 + 8);
  if (iVar1 != 0) {
    iVar12 = 0;
    do {
      lVar6 = FUN__text__001930e0(lVar8,iVar12);
      uVar2 = *(uint *)(lVar6 + 0xc);
      if (uVar2 != 0) {
        uVar13 = *(undefined8 *)(lVar6 + 0x30);
        iVar4 = FUN__text__00192b70(uVar13);
        if ((3 < uVar2) && (iVar4 != 0)) {
          iVar14 = 0;
          do {
            lVar6 = FUN__text__00192c60(uVar13,iVar14);
            lVar11 = *(long *)(lVar6 + 0x20);
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
            }
            cVar3 = *(char *)(lVar6 + 0x28);
            local_64[0] = '\0';
            FUN__text__00320970(local_64,iVar14);
            lVar6 = lVar11;
            if (cVar3 != local_64[0]) {
              uVar5 = FUN__text__001ac9d4(local_64[0]);
              if (uVar2 == 0xc) {
                uVar5 = 1;
              }
              local_70 = lVar9;
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
              }
              local_78 = *param_2;
              if (local_78 != 0) {
                (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
              }
              local_80 = *param_3;
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
              }
              local_88 = *param_4;
              if (local_88 != 0) {
                (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
              }
              lVar6 = FUN__text__00325bc0();
              local_90 = 0x8bda73dc3ffbb487;
              if (*(int *)(lVar6 + 0x2c) != 7) {
                local_90 = 0x6b20d779e611fa0;
              }
              FUN__text__001acdd8(&local_70,&local_78,&local_80,&local_88,&local_90,0,iVar14 + 1,
                                  uVar5);
              if (local_88 != 0) {
                (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
                local_88 = 0;
              }
              if (local_80 != 0) {
                (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                local_80 = 0;
              }
              if (local_78 != 0) {
                (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                local_78 = 0;
              }
              if (local_70 != 0) {
                (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                local_70 = 0;
              }
              uVar10 = 1;
              lVar6 = lVar9;
            }
            uVar7 = FUN__text__005f3244(lVar6);
            FUN__text__00320780(uVar7,iVar14);
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
            }
            iVar14 = iVar14 + 1;
          } while (iVar4 != iVar14);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar1);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return uVar10;
}


