/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009E200
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019e200; name: FUN_.text__0019e200
 */


void FUN__text__0019e200(undefined8 *param_1,long *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x2f8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *puVar1 = 0x86d9c8;
  puVar1[1] = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 7) = 0x100;
  puVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 10) = 0x100;
  puVar1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 0xd) = 0x100;
  puVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 0x10) = 0x100;
  puVar1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 0x13) = 0x100;
  puVar1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 0x19) = 0x100;
  puVar1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(puVar1 + 0x1c) = 0x100;
  *(undefined2 *)(puVar1 + 0x1f) = 0x100;
  *(undefined2 *)(puVar1 + 0x22) = 0x100;
  *(undefined2 *)(puVar1 + 0x25) = 0x100;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  *(undefined2 *)(puVar1 + 0x2b) = 0x100;
  *(undefined2 *)(puVar1 + 0x2e) = 0x100;
  *(undefined2 *)(puVar1 + 0x31) = 0x100;
  *(undefined2 *)(puVar1 + 0x34) = 0x100;
  *(undefined2 *)(puVar1 + 0x37) = 0x100;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  *(undefined1 *)(puVar1 + 0x3d) = 0;
  *(undefined1 *)(puVar1 + 0x40) = 0;
  *(undefined1 *)(puVar1 + 0x43) = 0;
  puVar1[0x42] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x41] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x46) = 0;
  puVar1[0x45] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x44] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x49) = 0;
  puVar1[0x48] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x47] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x4c) = 0;
  puVar1[0x4b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x4a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x4f) = 0;
  puVar1[0x4e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x4d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x52) = 0;
  puVar1[0x51] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x50] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x55) = 0;
  puVar1[0x54] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x53] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x58) = 0;
  puVar1[0x57] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x56] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x5b) = 0;
  puVar1[0x5a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x59] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar1 + 0x5e) = 0;
  puVar1[0x5d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x5c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0x86db00;
  *(undefined1 *)((long)puVar1 + 0xb1) = 1;
  *(undefined1 *)((long)puVar1 + 0x141) = 1;
  *(undefined1 *)((long)puVar1 + 0x1d1) = 1;
  *(undefined1 *)((long)puVar1 + 0x1e9) = 1;
  *(undefined1 *)((long)puVar1 + 0x201) = 1;
  *(undefined1 *)((long)puVar1 + 0x219) = 1;
  *(undefined1 *)((long)puVar1 + 0x231) = 1;
  *(undefined1 *)((long)puVar1 + 0x249) = 1;
  *(undefined1 *)((long)puVar1 + 0x261) = 1;
  *(undefined1 *)((long)puVar1 + 0x279) = 1;
  *(undefined1 *)((long)puVar1 + 0x291) = 1;
  *(undefined1 *)((long)puVar1 + 0x2a9) = 1;
  *(undefined1 *)((long)puVar1 + 0x2c1) = 1;
  *(undefined1 *)((long)puVar1 + 0x2d9) = 1;
  *(undefined1 *)((long)puVar1 + 0x2f1) = 1;
  puVar1[0x1d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x21] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x26] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x29] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x2a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x2c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x2d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x2f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x32] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x33] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x35] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x36] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x38] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x39] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x3b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x3c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x3e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0x3f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0x2f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  *param_1 = puVar1;
  param_1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


