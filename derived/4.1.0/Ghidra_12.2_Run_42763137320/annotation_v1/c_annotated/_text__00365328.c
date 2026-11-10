/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00265328
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00365328; name: FUN_.text__00365328
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00365328(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_0089f448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00371260(*_DAT_0089f448,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_24 = 0x1b882b09; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0x21c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = (void *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__003659f0(lVar3,&local_24,&local_48,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00371260(*puVar1,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = (void *)CONCAT44(local_48._4_4_,0x3f8120ba); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__0035e520(lVar3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0x498) = (short)(uVar5 >> 0x10);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00371260(uVar6,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = (void *)CONCAT44(local_48._4_4_,0x9ec079da); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__0035e520(lVar3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0x49a) = (short)(uVar5 >> 0x10);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00371260(uVar6,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = (void *)CONCAT44(local_48._4_4_,0xe2798dde); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__0035dd10(lVar3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x49c) = (char)(uVar5 >> 8);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00371260(uVar6,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = (void *)CONCAT44(local_48._4_4_,0x6c99f9a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__0035e520(lVar3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0x49e) = (short)(uVar5 >> 0x10);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__00371260(uVar6,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = (void *)CONCAT44(local_48._4_4_,0xc7652f1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__00365bd0(lVar3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x4a0) = (int)(uVar5 >> 0x20);
  memcpy((void *)(param_1 + 0x27c),(void *)(param_1 + 0x60),0x21c); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


