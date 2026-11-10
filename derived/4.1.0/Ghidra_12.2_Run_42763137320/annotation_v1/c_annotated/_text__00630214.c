/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：HOME_EH4_AES_CBC_Encrypt
 * 用途/行为：AES-CBC 加密 EH4 payload
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630214; name: FUN_.text__00630214
 */


void FUN__text__00630214(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2ef; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2ee; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2ed; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2ec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2eb; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2ea; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_2e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2df; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2de; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2dd; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2dc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2db; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2da; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2d9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2d6 [662]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060e784(auStack_40,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = FUN__text__0060e7e4(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  __src = (void *)FUN__text__0060e7ec(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  memset(auStack_2d6,0,0x296); // [自动静态注释] 内存复制、清零或移动
  __n = (ulong)*(ushort *)(lVar2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(ushort *)(lVar2 + 0xe) & 0xf) == 0) { // [自动静态注释] 条件判断/分支
    memcpy(auStack_2d6,__src,__n); // [自动静态注释] 内存复制、清零或移动
    uVar3 = *(ulong *)(lVar2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = uVar3 ^ 0x6b7b5966193db88b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar3 & 0x937ec53bf8856e87; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2d9 = (undefined1)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = ((uint)uVar5 & 0xff00ff00) >> 8 | ((uint)uVar5 & 0xff00ff) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e4 = uVar1 >> 0x10 | uVar1 << 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e5 = (undefined1)(uVar5 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e6 = (undefined1)(uVar5 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e7 = (undefined1)(uVar5 >> 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e8 = (undefined1)(uVar5 >> 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2da = (undefined1)(uVar4 >> 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2db = (undefined1)(uVar4 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2dc = (undefined1)(uVar4 >> 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2dd = (undefined1)(uVar4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2df = (undefined1)(uVar4 >> 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e0 = (undefined1)(uVar4 >> 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2de = (undefined1)(uVar4 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar3 ^ 0x5f4ed4e84975d976; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f1 = (undefined1)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 | 0xe3cda917ea9e489c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2e9 = (undefined1)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f2 = (undefined1)(uVar4 >> 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f3 = (undefined1)(uVar4 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f4 = (undefined1)(uVar4 >> 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f5 = (undefined1)(uVar4 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f6 = (undefined1)(uVar4 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f7 = (undefined1)(uVar4 >> 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f8 = (undefined1)(uVar4 >> 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2ea = (undefined1)(uVar3 >> 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2eb = (undefined1)(uVar3 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2ec = (undefined1)(uVar3 >> 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2ed = (undefined1)(uVar3 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2ee = (undefined1)(uVar3 >> 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2ef = (undefined1)(uVar3 >> 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2f0 = (undefined1)(uVar3 >> 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__005971f0(auStack_2d6,__n,&local_2e8,&local_2f8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar3 == __n) { // [自动静态注释] 条件判断/分支
      memcpy(__src,auStack_2d6,__n); // [自动静态注释] 内存复制、清零或移动
      FUN__text__0060e79c(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


