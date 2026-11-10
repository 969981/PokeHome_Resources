/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00211E40
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311e40; name: FUN_.text__00311e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00311e40(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(uVar1 + 0x98) == 0) { // [自动静态注释] 条件判断/分支
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a2bb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a2bb0 + 0x10;
  param_1[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar2 + 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset((void *)((long)param_1 + 0x5c),0,0x41c8); // [自动静态注释] 内存复制、清零或移动
  *(undefined8 *)((long)param_1 + 0x54) = 0x62f120f17;
  *(undefined8 *)((long)param_1 + 0x4224) = 0;
  *(undefined8 *)((long)param_1 + 0x93c) = 0x3a7a66783a7a6678;
  *(undefined8 *)((long)param_1 + 0x944) = 0x3a7a66783a7a6678;
  puVar4 = (undefined4 *)((long)param_1 + 0xfcc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = 0xba; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x4264) = 0;
  *(undefined8 *)((long)param_1 + 0x422c) = 0;
  *(undefined8 *)((long)param_1 + 0x4234) = 0;
  *(undefined8 *)((long)param_1 + 0x423c) = 0;
  *(undefined8 *)((long)param_1 + 0x4244) = 0;
  *(undefined8 *)((long)param_1 + 0x424c) = 0;
  *(undefined8 *)((long)param_1 + 0x4254) = 0;
  *(undefined8 *)((long)param_1 + 0x425c) = 0;
  do { // [自动静态注释] 循环/迭代
    *(undefined2 *)(puVar4 + 1) = 0;
    lVar3 = lVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar4 = 0x7f00fe;
    puVar4[0x117] = 0x7f00fe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)(puVar4 + 0x118) = 0;
    puVar4[0x22e] = 0x7f00fe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)(puVar4 + 0x22f) = 0;
    puVar4[0x345] = 0x7f00fe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)(puVar4 + 0x346) = 0;
    puVar4 = (undefined4 *)((long)puVar4 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar3 != 0); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


