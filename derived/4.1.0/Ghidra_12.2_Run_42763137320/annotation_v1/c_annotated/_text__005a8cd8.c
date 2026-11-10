/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A8CD8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8cd8; name: FUN_.text__005a8cd8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8cd8(long param_1,void *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memcpy((void *)(param_1 + 0x50),param_2,0xa0); // [自动静态注释] 内存复制、清零或移动
  *(int *)(param_1 + 0x8588) = *(int *)(param_1 + 0x70);
  uVar3 = (uint)(*(int *)(param_1 + 0x70) != 0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x8598) = uVar3;
  *(uint *)(param_1 + 0x859c) = uVar3;
  nn::os::GetSystemTick(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = nn::os::ConvertToTimeSpan(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  FUN__text__005a8fbc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a93c0(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a94f4(*(undefined8 *)(param_1 + 8),param_1 + 0xa8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a9634(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005ab36c(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a9788(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebe38(&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006f5618(param_1 + 0x4208,_DAT_008a0448,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006f5618(param_1 + 0x4260,uVar1,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)((long)param_2 + 0x5c) == '\0') { // [自动静态注释] 条件判断/分支
    lVar5 = *_DAT_0089fd80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__0010feac(&local_48,*(undefined8 *)(lVar5 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005a99c4(&local_48,*(undefined8 *)(param_1 + 8),(long)param_2 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x168) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x168) = local_48;
    *(undefined8 *)(local_48 + 0x98) = 0x3e99999a00000000;
    *(undefined8 *)(local_48 + 0xa0) = 0x3f8000003f800000;
    lVar5 = *_DAT_0089fd80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__005ab5d0(&local_58,*(undefined8 *)(lVar5 + 8),&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(ulong *)(lVar2 + 0x130) = *(ulong *)(lVar2 + 0x130) | 0x20;
  if (*(long *)(lVar5 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(lVar5 + 0x50) = lVar2;
  local_48 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4c = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = *(undefined8 *)(*_DAT_008a0228 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__005abb5c(&uStack_31,*(undefined8 *)(param_1 + 8),&local_48,&local_4c,&local_58) // [自动静态注释] 调用尚未恢复正式名称的函数
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x1d8) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x1d8) = lVar5;
  lVar5 = FUN__text__005abdcc(&local_48,*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x8580) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8580) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x8580) = lVar5;
  pcVar4 = *(code **)(param_1 + 0x84f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x8500) = 0;
    *(undefined8 *)(param_1 + 0x8508) = 0;
    *(undefined8 *)(param_1 + 0x84f0) = 0;
    *(undefined8 *)(param_1 + 0x84f8) = 0;
    (*pcVar4)(param_1 + 0x8510); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x84f0) = FUN__text__005ace14;
  *(undefined **)(param_1 + 0x84f8) = &DAT__text__005ace4c;
  *(undefined1 **)(param_1 + 0x8500) = &LAB__text__005ace50;
  *(undefined1 **)(param_1 + 0x8508) = &LAB__text__005ace5c;
  *(long *)(param_1 + 0x8510) = param_1;
  FUN__text__005df194(*_DAT_0089ff88,3,param_1 + 0x84e0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = FUN__text__005abdcc(&local_48,*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x8590) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8590) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x8590) = lVar5;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


