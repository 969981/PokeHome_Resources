/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004973A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005973a0; name: FUN_.text__005973a0
 */


ulong FUN__text__005973a0(uchar *param_1,ulong param_2,ulong param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uchar *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  AesDecryptor *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  AesDecryptor *local_158; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_150; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uchar auStack_140 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t local_130; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_128; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  AesDecryptor aAStack_120 [176]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((((param_2 & 0xf) == 0) && (param_4 != (undefined8 *)0x0)) && (param_2 != 0)) && // [自动静态注释] 条件判断/分支
     ((param_1 != (uchar *)0x0 && (param_3 != 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::crypto::detail::AesImpl<16ul>::Initialize(aAStack_120,param_3,true); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uStack_150 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_148 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_130 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_128 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_158 = aAStack_120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0xf < param_2) { // [自动静态注释] 条件判断/分支
      uVar2 = param_2 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        local_70 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_68 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((local_130 & 0xfffffffffffffff0) - 1 < 0xffffffffffffffee || // [自动静态注释] 条件判断/分支
            (local_130 & 0xfffffffffffffff0) == 0xffffffffffffffef) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        puVar1 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (local_130 == 0) { // [自动静态注释] 条件判断/分支
          __src = (AesDecryptor *)&local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00597488: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::crypto::detail::CbcModeImpl<nn::crypto::AesDecryptor<16ul>>::DecryptBlocks // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (puVar1,(uchar *)&uStack_150,(uchar *)__src,1,local_158); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar3 = 0x10 - local_130; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          __n = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (0xf < uVar3) { // [自动静态注释] 条件判断/分支
            __n = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          memcpy(auStack_140 + local_130,&local_70,__n); // [自动静态注释] 内存复制、清零或移动
          local_130 = local_130 + __n; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (local_130 == 0x10) { // [自动静态注释] 条件判断/分支
            nn::crypto::detail::CbcModeImpl<nn::crypto::AesDecryptor<16ul>>::DecryptBlocks // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (param_1,(uchar *)&uStack_150,auStack_140,1,local_158); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            puVar1 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_130 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          __src = aAStack_120 + __n + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (__n == 0) goto LAB__text__00597488; // [自动静态注释] 条件判断/分支
          if (uVar3 < 0x10) { // [自动静态注释] 条件判断/分支
            local_130 = 0x10 - __n; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            memcpy(auStack_140,__src,local_130); // [自动静态注释] 内存复制、清零或移动
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        param_1 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar2 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = param_2 & 0xfffffffffffffff0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::crypto::detail::ClearMemory(&local_158,0x38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::crypto::detail::AesImpl<16ul>::~AesImpl((AesImpl<16ul> *)aAStack_120); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


