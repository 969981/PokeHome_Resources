/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CEC80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cec80; name: FUN_.text__003cec80
 */


void FUN__text__003cec80(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__003e9680(*(undefined8 *)(param_1 + 0xc0),0x720314); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  uVar2 = 0x70c76e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x394) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0x71f618; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),0,uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = 0x7160a6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x394) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0x71dcb9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),1,uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = 0x70dc8b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x394) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0x719637; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),2,uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),7,0x713e9e,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),8,0x70fb2e,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__003e9790(*(undefined8 *)(param_1 + 0xc0),0x71f5ee); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),uVar2,3,0x717f63,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = FUN__text__003e9790(*(undefined8 *)(param_1 + 0xc0),0x720fb4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),lVar1,4,0x716bd7,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),lVar1,5,0x71751f,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),lVar1,6,0x71a257,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x388) = lVar1;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


