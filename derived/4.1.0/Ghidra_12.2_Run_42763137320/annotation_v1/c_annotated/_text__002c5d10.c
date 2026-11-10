/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C5D10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5d10; name: FUN_.text__002c5d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c5d10(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a2570; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = 0x38a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_0089f6e0 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = param_1 + 0x25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined4 *)((long)param_1 + 0x144); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    *(undefined2 *)(puVar3 + -7) = 0;
    lVar4 = lVar4 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)((long)puVar3 + -0x12) = 0;
    puVar3[-4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)(puVar3 + -3) = 0;
    *(undefined2 *)((long)puVar3 + -2) = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  do { // [自动静态注释] 循环/迭代
    *(undefined2 *)plVar2 = 0;
    *(undefined8 *)((long)plVar2 + 2) = 0xffffffffffff0;
    *(undefined2 *)((long)plVar2 + 10) = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    *(undefined2 *)(plVar2 + 2) = 0;
    *(undefined8 *)((long)plVar2 + 0x12) = 0xffffffffffff0;
    *(undefined2 *)((long)plVar2 + 0x1a) = 0;
    *(undefined4 *)((long)plVar2 + 0x1c) = 0;
    *(undefined2 *)(plVar2 + 4) = 0;
    *(undefined8 *)((long)plVar2 + 0x22) = 0xffffffffffff0;
    *(undefined2 *)((long)plVar2 + 0x2a) = 0;
    *(undefined4 *)((long)plVar2 + 0x2c) = 0;
    plVar2 = plVar2 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (plVar2 != param_1 + 0x739); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


