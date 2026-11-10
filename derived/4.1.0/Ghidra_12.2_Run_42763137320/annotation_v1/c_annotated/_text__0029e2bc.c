/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0019E2BC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e2bc; name: FUN_.text__0029e2bc
 */


bool FUN__text__0029e2bc(long param_1,void *param_2,size_t param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar7 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_c0 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  Md5Impl aMStack_b0 [96]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __dest = (int *)(**(code **)(**(long **)(param_1 + 0x50) + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                            (*(long **)(param_1 + 0x50),param_3,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memcpy(__dest,param_2,param_3); // [自动静态注释] 内存复制、清零或移动
  iVar2 = *__dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    *(bool *)param_4 = iVar2 < 0x34;
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = FUN__text__002a1890(iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__002a1864(iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar4 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)((long)__dest + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = 0;
    puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__002a41e4(auStack_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__002a41f4(auStack_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__002a4204(auStack_c0,__dest,lVar6,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    auVar7 = FUN__text__002a4250(auStack_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
    auVar3._8_8_ = uStack_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar3._0_8_ = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = auVar7 == auVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_b0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),__dest,param_3,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return bVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


