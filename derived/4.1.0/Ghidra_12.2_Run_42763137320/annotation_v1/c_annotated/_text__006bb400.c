/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BB400
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb400; name: FUN_.text__006bb400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bb400(undefined1 param_1 [16],float param_2,long param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float __x; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __dest = (void *)(*(long *)(*(long *)(param_4 + 200) + 0x38) + (long)*(int *)(param_6 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006b4514(); // [自动静态注释] 调用尚未恢复正式名称的函数
  __src = (void *)FUN__text__006add38(uVar2,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  memcpy(__dest,__src,0x230); // [自动静态注释] 内存复制、清零或移动
  local_28 = (float)FUN__text__006b2e38(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_54 = *(float *)(param_5 + 0xe4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006c1ba0(0,0x42c80000,&local_54); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0.0 < *(float *)(param_5 + 0xe4)) { // [自动静态注释] 条件判断/分支
    __x = *(float *)(param_5 + 0xe0) * (*_DAT_008a02c8 / *_DAT_008a02d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = cosf(__x); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = -(fVar3 * local_54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = local_28 + fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = sinf(__x); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = -(fVar3 * local_54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_24 = local_24 + fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069d970(fVar4 / *(float *)(param_3 + 0x50),-fVar3 / *(float *)(param_3 + 0x54),param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                      ,__dest,&local_28,(float *)(param_3 + 0x50),*(undefined1 *)(param_3 + 0xf1), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      *(undefined8 *)(param_3 + 0xf8));
  *(undefined8 *)((long)__dest + 0xd0) = 0x3f8000003f800000;
  *(undefined8 *)((long)__dest + 0xd8) = 0x3f8000003f800000;
  lVar1 = *(long *)(*(long *)(param_4 + 200) + 0x38) + (long)*(int *)(param_6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006bac98(param_3,lVar1,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar1 + 0x7c) = 0;
  FUN__text__006bb00c(uVar2,*(undefined4 *)(param_5 + 0xe8),*(undefined4 *)(param_5 + 0xe0), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)(param_5 + 0xe4),param_3,lVar1,*(byte *)(param_5 + 4) >> 4 & 1,
                      *(byte *)(param_5 + 4) >> 5 & 1,*(undefined1 *)(param_5 + 10),param_5 + 0xd0,
                      *(undefined1 *)(param_5 + 0xb),1);
  *(undefined8 *)(lVar1 + 0xbc) = 0xbf80000000000000;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


