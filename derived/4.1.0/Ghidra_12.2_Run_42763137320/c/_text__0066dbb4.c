/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066dbb4; name: FUN_.text__0066dbb4
 */


undefined8 FUN__text__0066dbb4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  if (*(long *)(param_1 + 0xf48) == 0) {
    if (*(long *)(param_1 + 0xf28) != 0) {
      if ((*(byte *)(param_1 + 0xf68) & 1) != 0) goto LAB__text__0066dbe8;
      goto LAB__text__0066dbfc;
    }
LAB__text__0066dc18:
    FUN__text__0066713c(param_1,0x70d57b);
    uVar2 = 3;
  }
  else {
    if ((*(byte *)(param_1 + 0xf68) & 1) != 0) {
LAB__text__0066dbe8:
      FUN__text__006783e4();
      *(undefined8 *)(param_1 + 0xf48) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
LAB__text__0066dbfc:
      if ((*(long *)(param_1 + 0xf28) != 0) &&
         (iVar1 = FUN__text__0066e580(*(long *)(param_1 + 0xf28),0,param_1 + 0xd48,0), iVar1 != 0))
      goto LAB__text__0066dc18;
    }
    *(undefined8 *)(param_1 + 0xf48) = *(undefined8 *)(param_1 + 0xd48);
    uVar2 = FUN__text__00677d50(param_1,*(undefined8 *)(param_1 + 0xbf8));
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined4 *)(param_1 + 0x14e0) = 0;
      *(undefined8 *)(param_1 + 0x1248) = *(undefined8 *)(param_1 + 0x6b0);
      *(ushort *)(param_1 + 0x15a4) =
           (ushort)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x24) & 0x80 |
           *(ushort *)(param_1 + 0x15a4) & 0xff55;
      *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x6b8);
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1640));
      iVar1 = *(int *)(param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0x1640) = 0;
      if ((iVar1 == 1) || (iVar1 == 6)) {
        *(undefined8 *)(param_1 + 0x1518) = 0;
      }
      else if (iVar1 == 5) {
        *(undefined8 *)(param_1 + 0x1518) = *(undefined8 *)(param_1 + 0x7d8);
      }
      else {
        *(long *)(param_1 + 0x1518) = *(long *)(param_1 + 0x6f8);
        if ((*(char **)(param_1 + 0x6e8) != (char *)0x0) && (*(long *)(param_1 + 0x6f8) == -1)) {
          sVar3 = strlen(*(char **)(param_1 + 0x6e8));
          *(size_t *)(param_1 + 0x1518) = sVar3;
        }
      }
      if (*(long *)(param_1 + 0xf58) != 0) {
        FUN__text__006519f0(param_1);
      }
      if ((*(long *)(param_1 + 0xf60) == 0) ||
         (uVar2 = FUN__text__00654cac(param_1), (int)uVar2 == 0)) {
        *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 0x10;
        FUN__text__006535fc(param_1);
        FUN__text__00666378(param_1);
        FUN__text__006664d0(param_1);
        *(ulong *)(param_1 + 0x1250) = *(ulong *)(param_1 + 0x1250) & *(ulong *)(param_1 + 0x1248);
        *(ulong *)(param_1 + 0x1270) = *(ulong *)(param_1 + 0x1270) & *(ulong *)(param_1 + 0x1268);
        if ((*(char *)(param_1 + 0x15a4) < '\0') &&
           ((*(int *)(param_1 + 0x15a8) == 0 &&
            (iVar1 = FUN__text__00678280(param_1 + 0x15a8), iVar1 != 0)))) {
          uVar2 = 0x1b;
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


