/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4e4c; name: FUN_.text__003d4e4c
 */


void FUN__text__003d4e4c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  ulong uStack_48;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    lVar1 = *(long *)(lVar2 + 0x10);
    local_50 = 0;
    uStack_48 = 0;
    lVar3 = param_1[1];
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN__text__006ebf00(&local_70);
    local_58 = (ulong)CONCAT24(*(undefined2 *)(lVar2 + 0x22),(uint)*(ushort *)(lVar2 + 0x20));
    uStack_68 = CONCAT44((int)*(float *)(lVar2 + 0x18),(undefined4)uStack_68);
    local_60 = CONCAT44(local_60._4_4_,(int)*(float *)(lVar2 + 0x1c));
    uStack_48 = (ulong)CONCAT24(*(undefined2 *)(lVar2 + 0x24),(undefined4)uStack_48);
    FUN__text__006eddd4(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123);
    FUN__text__006eddfc(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123);
    FUN__text__006ed4ac(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,
                        *(undefined8 *)(lVar2 + 8),lVar1 + 0x58,&local_70);
    FUN__text__006eddd4(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123);
    FUN__text__006eddfc(*(long *)(lVar3 + 0x58) + (long)DAT_00b11158 * 0x168,0x123);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    return;
  }
  return;
}


