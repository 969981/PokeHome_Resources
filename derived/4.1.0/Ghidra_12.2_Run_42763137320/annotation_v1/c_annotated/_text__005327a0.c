/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004327A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005327a0; name: FUN_.text__005327a0
 */


long FUN__text__005327a0(long *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 <= uVar9) { // [自动静态注释] 条件判断/分支
    iVar1 = uVar2 + (uVar2 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__00532970(param_1,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)((long)param_1 + 0xc) <= uVar9) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar9 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 1) = uVar9 + 1;
  puVar10 = (undefined4 *)(lVar6 + (ulong)uVar9 * 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    *puVar10 = 0;
    lVar6 = lVar6 + (ulong)uVar9 * 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0x3f8000003f800000;
    *(undefined2 *)(lVar6 + 0x2c) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined1 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 1;
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((undefined4 *)(lVar7 + (ulong)param_2 * 0x58) < puVar10) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar12 = puVar10 + -0x16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar10 = *puVar12;
      *(undefined8 *)(puVar10 + 6) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar10 + -0xe);
      *(undefined8 *)((long)puVar10 + 0x26) = *(undefined8 *)((long)puVar10 + -0x32);
      *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar10 + -0x14);
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar10 + -0x12);
      *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)(puVar10 + -10);
      *(undefined8 *)(puVar10 + 0xe) = *(undefined8 *)(puVar10 + -8);
      puVar10[0x10] = puVar10[-6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(long *)(puVar10 + 0x12) != 0) && (*(char *)(puVar10 + 0x14) != '\0')) { // [自动静态注释] 条件判断/分支
        FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      uVar5 = *(undefined8 *)(puVar10 + -4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar10 + -4) = 0;
      *(undefined8 *)(puVar10 + 0x12) = uVar5;
      uVar3 = *(undefined1 *)(puVar10 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(puVar10 + -2) = 0;
      *(undefined1 *)(puVar10 + 0x14) = uVar3;
      lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((undefined4 *)(lVar7 + (ulong)param_2 * 0x58) < puVar12); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = (long *)(lVar7 + (ulong)param_2 * 0x58 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*plVar8 != 0) && (pcVar11 = (char *)(lVar7 + (ulong)param_2 * 0x58 + 0x50), *pcVar11 != '\0') // [自动静态注释] 条件判断/分支
     ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
    *pcVar11 = '\0';
  } // [自动静态注释] 作用域/控制流边界
  *plVar8 = 0;
  lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    puVar10 = (undefined4 *)(*param_1 + (ulong)param_2 * 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar10 + 6) = 0;
    *(undefined8 *)(puVar10 + 8) = 0x3f8000003f800000;
    *puVar10 = 0;
    puVar10[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)(puVar10 + 0xb) = 0;
    *(undefined8 *)(puVar10 + 0x12) = 0;
    *(undefined1 *)(puVar10 + 0x14) = 0;
    *(undefined8 *)(puVar10 + 0xc) = 1;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return lVar7 + (ulong)param_2 * 0x58; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


