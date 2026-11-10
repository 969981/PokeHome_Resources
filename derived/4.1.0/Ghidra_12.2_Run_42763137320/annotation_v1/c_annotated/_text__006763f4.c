/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005763F4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006763f4; name: FUN_.text__006763f4
 */


void FUN__text__006763f4(undefined1 *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = param_2 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)*param_2 & 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __n = uVar4 ^ 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)puVar5 + uVar4) = 0x80;
  lVar3 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__n < 8) { // [自动静态注释] 条件判断/分支
    memset((void *)((long)param_2 + uVar4 + 0x19),0,__n); // [自动静态注释] 内存复制、清零或移动
    __n = 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00676714(param_2,puVar5,0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  memset((void *)((long)param_2 + lVar3 + 0x18),0,__n - 8); // [自动静态注释] 内存复制、清零或移动
  uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = uVar1 << 3;
  uVar2 = FUN__text__00678260(uVar1 << 3 & 0xf8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_2 + 0x14) = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 1)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 0x51) = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 2)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 0x52) = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 3)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 0x53) = uVar2;
  uVar2 = FUN__text__00678260((char)param_2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_2 + 0x15) = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 5)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 0x55) = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 6)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 0x56) = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 7)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)param_2 + 0x57) = uVar2;
  FUN__text__00676714(param_2,puVar5,0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00678260((char)param_2[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = uVar2;
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 9)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[2] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0xb)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260((char)param_2[3]); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[4] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0xd)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[5] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0xe)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[6] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0xf)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260((char)param_2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[8] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0x11)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[9] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0x12)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[10] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0x13)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xb] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260((char)param_2[5]); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xc] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0x15)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xd] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0x16)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xe] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00678260(*(undefined1 *)((long)param_2 + 0x17)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0xf] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(param_2,0,0x98); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


