/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000E3C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e3c90; name: FUN_.text__001e3c90
 */


void FUN__text__001e3c90(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x8c) = 0x1400000014;
  *(undefined8 *)(param_1 + 0x94) = 0x1400000014;
  *(undefined8 *)(param_1 + 0x9c) = 0x1400000014;
  *(undefined8 *)(param_1 + 0xd4) = 0x1400000012;
  *(undefined8 *)(param_1 + 0xe0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xe8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xcc) = 0x1100000010;
  *(undefined8 *)(param_1 + 0xf0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xf8) = 0xcbf29ce484222645;
  *(undefined1 *)(param_1 + 0xdc) = 0x13;
  *(undefined8 *)(param_1 + 0xc4) = 0xf0000000e;
  *(undefined8 *)(param_1 + 0xbc) = 0xd0000000c;
  *(undefined8 *)(param_1 + 0xb4) = 0xb0000000a;
  *(undefined8 *)(param_1 + 0x100) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x108) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xac) = 0x900000008;
  *(undefined8 *)(param_1 + 0xa4) = 0x700000006;
  *(undefined8 *)(param_1 + 0x8c) = 0x100000000;
  *(undefined8 *)(param_1 + 0x110) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x118) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x94) = 0x300000002;
  *(undefined8 *)(param_1 + 0x9c) = 0x500000004;
  *(undefined8 *)(param_1 + 0x120) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x128) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x130) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x138) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x140) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x148) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x150) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x158) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x160) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x168) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x170) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x178) = 0xcbf29ce484222645;
  if (*(long *)(param_1 + 0x68) == 0) goto LAB__text__001e3de0; // [自动静态注释] 条件判断/分支
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(**(code **)*puVar5)(puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)FUN__text__0018d6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
      if (plVar2 == (long *)0x0) goto LAB__text__001e3dd8; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    if (((int *)puVar5[2] != (int *)0x0) && (*(int *)puVar5[2] == 2)) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0xd8) = 0x13;
      *(undefined1 *)(param_1 + 0xdc) = 0x14;
      goto LAB__text__001e3de0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__001e3dd8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(char *)(param_1 + 0xdc) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__001e3de0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar4 = FUN__text__001d7be0(*(undefined4 *)(param_1 + 0xe0 + uVar6 * 4 + -0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar1 = *(byte *)(param_1 + 0xdc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xe0 + uVar6 * 8) = uVar4;
    uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar6 < bVar1); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


