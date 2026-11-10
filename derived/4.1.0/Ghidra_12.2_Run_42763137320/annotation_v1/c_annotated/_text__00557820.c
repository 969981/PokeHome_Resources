/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00457820
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00557820; name: FUN_.text__00557820
 */


void FUN__text__00557820(long param_1,undefined8 param_2,long *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_5 + 1);
  *(undefined4 *)(param_1 + 100) = *param_5;
  FUN__text__005576dc(param_4,param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
  plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = (**(code **)(*plVar4 + 0xe0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = iVar3 * 0x343fd + 0x269ec3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 300) = 0;
  uVar2 = uVar1 * 0x343fd + 0x269ec3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x38);
  *(float *)(param_1 + 0x68) =
       *(float *)(param_1 + 0x20) * 4.656613e-10 * (float)uVar1 - *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x6c) =
       *(float *)(param_1 + 0x28) * 4.656613e-10 * (float)uVar2 - *(float *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x34) == '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__005557f0(param_1 + 0xd0,param_2,*(undefined1 *)(param_5 + 1),*param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_1 + 0x18),0);
    *(undefined2 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00558190(param_1 + 0x70,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


