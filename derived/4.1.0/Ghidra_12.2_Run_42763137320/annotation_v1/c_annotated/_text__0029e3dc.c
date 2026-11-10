/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0019E3DC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e3dc; name: FUN_.text__0029e3dc
 */


void FUN__text__0029e3dc(long param_1,byte param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_c0 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  Md5Impl aMStack_b0 [96]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __s = (void *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(__s,0,0x400000); // [自动静态注释] 内存复制、清零或移动
  FUN__text__002a1700(*(undefined8 *)(param_1 + 0x60),__s); // [自动静态注释] 调用尚未恢复正式名称的函数
  __n = FUN__text__002a1864(0x34); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = FUN__text__002a1890(0x34); // [自动静态注释] 调用尚未恢复正式名称的函数
  __dest = (void *)(**(code **)(**(long **)(param_1 + 0x50) + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             (*(long **)(param_1 + 0x50),__n,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memcpy(__dest,__s,__n); // [自动静态注释] 内存复制、清零或移动
  *(undefined8 *)((long)__dest + lVar1) = 0;
  ((undefined8 *)((long)__dest + lVar1))[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002a41e4(local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002a41f4(local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002a4204(local_c0,__dest,__n,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  auVar3 = FUN__text__002a4250(local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 (*) [16])((long)__s + lVar1) = auVar3;
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),__dest,__n,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_b0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00240ddc(local_c0,*(undefined8 *)(param_1 + 8),0x732824); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x58) = local_c0[0];
  pcVar2 = *(code **)(local_c0[0] + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_c0[0] + 0x380) = 0;
    *(undefined8 *)(local_c0[0] + 0x388) = 0;
    *(undefined8 *)(local_c0[0] + 0x370) = 0;
    *(undefined8 *)(local_c0[0] + 0x378) = 0;
    (*pcVar2)(local_c0[0] + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(local_c0[0] + 0x390) = param_2 & 1;
  *(code **)(local_c0[0] + 0x370) = FUN__text__0029ea74;
  *(undefined **)(local_c0[0] + 0x378) = &DAT__text__0029ef38;
  *(undefined4 *)(local_c0[0] + 0x394) = 0;
  *(long *)(local_c0[0] + 0x398) = param_1;
  *(undefined1 **)(local_c0[0] + 0x380) = &LAB__text__0029f4b4;
  *(undefined1 **)(local_c0[0] + 0x388) = &LAB__text__0029f4c0;
  FUN__text__005e896c(*(undefined8 *)(param_1 + 0x58),param_3,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x400090) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


