/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00219CF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00319cf0; name: FUN_.text__00319cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00319cf0(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__0031c760(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00304fc8(*_DAT_008a1478,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__00305984(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__00304b90(); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = 0x41ce8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar6 = (char *)((long)&DWORD_007f7130 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = 0x9a48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar9 = pcVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (*pcVar9 == '\x01') { // [自动静态注释] 条件判断/分支
            if (pcVar9[2] != '\0') { // [自动静态注释] 条件判断/分支
              uVar10 = *(undefined8 *)(pcVar9 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar4 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
              *(undefined8 *)(lVar4 + lVar7 + lVar8) = uVar10;
            } // [自动静态注释] 作用域/控制流边界
            uVar10 = *(undefined8 *)(pcVar9 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar4 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined8 *)(lVar4 + lVar3 + lVar8) = uVar10;
          } // [自动静态注释] 作用域/控制流边界
          lVar8 = lVar8 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pcVar9 = pcVar9 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar8 != 0xe0); // [自动静态注释] 循环/迭代
        lVar5 = lVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar6 = pcVar6 + 0x2a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = lVar7 + 0xe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = lVar3 + 0xe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar5 != 0x403); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(lVar5 + 0x9a28) = 0;
    FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = 0x9a48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a48) & 0x8001) == 0) { // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a50) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a58) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a60) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a68) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a70) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a78) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a80) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a88) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a90) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a98) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9aa0) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9aa8) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ab0) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ab8) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ac0) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ac8) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ad0) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ad8) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ae0) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ae8) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9af0) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9af8) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b00) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b08) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b10) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b18) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b20) & 0x8001) != 0) goto LAB__text__0031a0e0; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0031a0e0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(int *)(lVar3 + 0x9a28) = *(int *)(lVar3 + 0x9a28) + 1;
        lVar3 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (*(char *)(lVar3 + lVar5 + 0xa4d) == '\0') { // [自动静态注释] 条件判断/分支
          lVar3 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined1 *)(lVar3 + lVar5 + 0xa4d) = 1;
          lVar3 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined1 *)(lVar3 + lVar5 + 0x7a87c) = 1;
        } // [自动静态注释] 作用域/控制流边界
        lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar8 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (*(long *)(lVar8 + lVar7 + lVar3) != 0) { // [自动静态注释] 条件判断/分支
            lVar8 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(ulong *)(lVar8 + lVar7 + lVar3) = *(ulong *)(lVar8 + lVar7 + lVar3) | 1;
          } // [自动静态注释] 作用域/控制流边界
          lVar3 = lVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar3 != 0xe0); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      lVar5 = lVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = lVar7 + 0xe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0x403); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


