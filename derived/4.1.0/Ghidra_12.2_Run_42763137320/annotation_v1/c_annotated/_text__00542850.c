/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00442850
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00542850; name: FUN_.text__00542850
 */


undefined8 FUN__text__00542850(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0; // [自动静态注释] 循环/迭代
      puVar1 = (undefined8 *)puVar1[0x1c4]) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar1[0x1c6] != 0) goto LAB__text__005428d0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)FUN__text__00400f90(10,0xe38,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar1[0x1c4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0xe2] = puVar1 + 0x71; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = 0;
    puVar1[0x1c6] = puVar1 + 0x153; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0x71] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0x153] = puVar1 + 0xe2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar1 + 0x1c5) = 4;
    if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 **)(param_1 + 0x18) = puVar1;
      puVar1[0x1c4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s = (undefined8 *)puVar1[0x1c6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar1[0x1c4] = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(param_1 + 0x18) = puVar1;
LAB__text__005428d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      __s = (undefined8 *)puVar1[0x1c6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (__s != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar1[0x1c6] = *__s; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *__s = 0;
      *(int *)(puVar1 + 0x1c5) = *(int *)(puVar1 + 0x1c5) + -1;
      memset(__s,0,0x300); // [自动静态注释] 内存复制、清零或移动
      *(undefined4 *)(__s + 0x70) = 0;
      *(undefined8 **)(param_1 + 0x10) = __s;
      *(undefined4 *)((long)__s + 900) = 0;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x28) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN__text__00400fc0(10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(long *)(param_1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0050cda0(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(param_1 + 0x10) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


