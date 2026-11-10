/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00103A60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00203a60; name: FUN_.text__00203a60
 */


void FUN__text__00203a60(int *param_1,int *param_2,int *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_2 == 0) { // [自动静态注释] 条件判断/分支
    if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    goto LAB__text__00203b04; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    bVar7 = *(byte *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar8 = bVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((bVar7 == *(byte *)(param_1 + 1)) && // [自动静态注释] 条件判断/分支
         (bVar8 = *(byte *)((long)param_2 + 5), bVar8 == *(byte *)((long)param_1 + 5))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (bVar8 = *(byte *)((long)param_2 + 6), bVar8 == *(byte *)((long)param_1 + 6))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       ((bVar8 = *(byte *)((long)param_2 + 7), bVar8 == *(byte *)((long)param_1 + 7) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (bVar8 = *(byte *)(param_2 + 2), bVar8 == *(byte *)(param_1 + 2))))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar8 = *(byte *)((long)param_1 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)*(byte *)((long)param_2 + 9) == (uint)bVar8) { // [自动静态注释] 条件判断/分支
        uVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar5 == param_1[3]) { // [自动静态注释] 条件判断/分支
          if (((char)param_2[4] == '\0') || ((char)param_2[4] == (char)param_1[4])) { // [自动静态注释] 条件判断/分支
LAB__text__00203c80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
              return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            bVar8 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((((bVar8 == bVar7) && // [自动静态注释] 条件判断/分支
                 (bVar8 = *(byte *)((long)param_3 + 5), bVar8 == *(byte *)((long)param_2 + 5))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (bVar8 = *(byte *)((long)param_3 + 6), bVar8 == *(byte *)((long)param_2 + 6))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               ((bVar8 = *(byte *)((long)param_3 + 7), bVar8 == *(byte *)((long)param_2 + 7) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (bVar8 = *(byte *)(param_3 + 2), bVar8 == *(byte *)(param_2 + 2))))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar8 = *(byte *)((long)param_3 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar7 = *(byte *)((long)param_2 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if ((uint)bVar8 == (uint)bVar7) { // [自动静态注释] 条件判断/分支
                uVar5 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (uVar5 == param_2[3]) { // [自动静态注释] 条件判断/分支
                  if ((char)param_3[4] == '\0') { // [自动静态注释] 条件判断/分支
                    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                  } // [自动静态注释] 作用域/控制流边界
                  if ((char)param_3[4] == (char)param_2[4]) { // [自动静态注释] 条件判断/分支
                    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                  } // [自动静态注释] 作用域/控制流边界
                } // [自动静态注释] 作用域/控制流边界
                else if (uVar5 == bVar7 || (int)uVar5 < (int)(uint)bVar7) { // [自动静态注释] 条件判断/分支
                  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                } // [自动静态注释] 作用域/控制流边界
                goto LAB__text__00203b04; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
            if (bVar8 == 0) { // [自动静态注释] 条件判断/分支
              return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
LAB__text__00203b04: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar3 = *(undefined8 *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar9 = param_3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar2 = *(undefined8 *)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = *(undefined8 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)param_2 = *(undefined8 *)param_3;
            *(undefined8 *)(param_2 + 2) = uVar3;
            iVar6 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(char *)(param_2 + 4) = (char)iVar9;
            *(undefined8 *)param_3 = uVar2;
            *(undefined8 *)(param_3 + 2) = uVar4;
            *(char *)(param_3 + 4) = (char)iVar6;
            if (*param_2 == 0) { // [自动静态注释] 条件判断/分支
              return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
              cVar10 = (char)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (((cVar10 == (char)param_1[1]) && // [自动静态注释] 条件判断/分支
                  (cVar10 = *(char *)((long)param_2 + 5), cVar10 == *(char *)((long)param_1 + 5))) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 && ((cVar10 = *(char *)((long)param_2 + 6), cVar10 == *(char *)((long)param_1 + 6) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     && ((cVar10 = *(char *)((long)param_2 + 7), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         cVar10 == *(char *)((long)param_1 + 7) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (cVar10 = (char)param_2[2], cVar10 == (char)param_1[2])))))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                bVar7 = *(byte *)((long)param_1 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if ((uint)*(byte *)((long)param_2 + 9) == (uint)bVar7) { // [自动静态注释] 条件判断/分支
                  uVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  if (uVar5 == param_1[3]) { // [自动静态注释] 条件判断/分支
                    if ((char)param_2[4] == '\0') { // [自动静态注释] 条件判断/分支
                      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                    } // [自动静态注释] 作用域/控制流边界
                    if ((char)param_2[4] == (char)param_1[4]) { // [自动静态注释] 条件判断/分支
                      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                    } // [自动静态注释] 作用域/控制流边界
                  } // [自动静态注释] 作用域/控制流边界
                  else if (uVar5 == bVar7 || (int)uVar5 < (int)(uint)bVar7) { // [自动静态注释] 条件判断/分支
                    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                  } // [自动静态注释] 作用域/控制流边界
                } // [自动静态注释] 作用域/控制流边界
                else if (*(byte *)((long)param_2 + 9) == 0) { // [自动静态注释] 条件判断/分支
                  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
                } // [自动静态注释] 作用域/控制流边界
              } // [自动静态注释] 作用域/控制流边界
              else if (cVar10 == '\0') { // [自动静态注释] 条件判断/分支
                return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
            uVar3 = *(undefined8 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar9 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar2 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)param_1 = *(undefined8 *)param_2;
            *(undefined8 *)(param_1 + 2) = uVar3;
            iVar6 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(char *)(param_1 + 4) = (char)iVar9;
            *(undefined8 *)param_2 = uVar2;
            *(undefined8 *)(param_2 + 2) = uVar4;
            *(char *)(param_2 + 4) = (char)iVar6;
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else if (uVar5 == bVar8 || (int)uVar5 < (int)(uint)bVar8) goto LAB__text__00203c80; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else if (*(byte *)((long)param_2 + 9) == 0) goto LAB__text__00203c80; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else if (bVar8 == 0) goto LAB__text__00203c80; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  if (*param_3 == 0) goto LAB__text__00203d54; // [自动静态注释] 条件判断/分支
  cVar10 = (char)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((cVar10 == (char)param_2[1]) && // [自动静态注释] 条件判断/分支
       (cVar10 = *(char *)((long)param_3 + 5), cVar10 == *(char *)((long)param_2 + 5))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (cVar10 = *(char *)((long)param_3 + 6), cVar10 == *(char *)((long)param_2 + 6))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     ((cVar10 = *(char *)((long)param_3 + 7), cVar10 == *(char *)((long)param_2 + 7) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (cVar10 = (char)param_3[2], cVar10 == (char)param_2[2])))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = *(byte *)((long)param_2 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uint)*(byte *)((long)param_3 + 9) == (uint)bVar7) { // [自动静态注释] 条件判断/分支
      uVar5 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 == param_2[3]) { // [自动静态注释] 条件判断/分支
        if (((char)param_3[4] == '\0') || ((char)param_3[4] == (char)param_2[4])) // [自动静态注释] 条件判断/分支
        goto LAB__text__00203d54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        goto LAB__text__00203c54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (uVar5 != bVar7 && (int)(uint)bVar7 <= (int)uVar5) goto LAB__text__00203c54; // [自动静态注释] 条件判断/分支
      goto LAB__text__00203d54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    bVar1 = *(byte *)((long)param_3 + 9) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar1 = cVar10 != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (bVar1) { // [自动静态注释] 条件判断/分支
LAB__text__00203c54: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *(undefined8 *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar9 = param_3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 2) = uVar3;
    iVar6 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(char *)(param_1 + 4) = (char)iVar9;
    *(char *)(param_3 + 4) = (char)iVar6;
    *(undefined8 *)param_3 = uVar2;
    *(undefined8 *)(param_3 + 2) = uVar4;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00203d54: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = *(undefined8 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar9 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = uVar3;
  iVar6 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 4) = (char)iVar9;
  *(undefined8 *)param_2 = uVar2;
  *(undefined8 *)(param_2 + 2) = uVar4;
  *(char *)(param_2 + 4) = (char)iVar6;
  if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*param_2 != 0) { // [自动静态注释] 条件判断/分支
    cVar10 = (char)param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((cVar10 == (char)param_2[1]) && // [自动静态注释] 条件判断/分支
         (cVar10 = *(char *)((long)param_3 + 5), cVar10 == *(char *)((long)param_2 + 5))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (cVar10 = *(char *)((long)param_3 + 6), cVar10 == *(char *)((long)param_2 + 6))) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       ((cVar10 = *(char *)((long)param_3 + 7), cVar10 == *(char *)((long)param_2 + 7) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (cVar10 = (char)param_3[2], cVar10 == (char)param_2[2])))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar7 = *(byte *)((long)param_2 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)*(byte *)((long)param_3 + 9) == (uint)bVar7) { // [自动静态注释] 条件判断/分支
        uVar5 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar5 == param_2[3]) { // [自动静态注释] 条件判断/分支
          if (((char)param_3[4] == '\0') || ((char)param_3[4] == (char)param_2[4])) { // [自动静态注释] 条件判断/分支
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else if (uVar5 == bVar7 || (int)uVar5 < (int)(uint)bVar7) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else if (*(byte *)((long)param_3 + 9) == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (cVar10 == '\0') { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(undefined8 *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar9 = param_3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = uVar3;
  iVar6 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_2 + 4) = (char)iVar9;
  *(char *)(param_3 + 4) = (char)iVar6;
  *(undefined8 *)param_3 = uVar2;
  *(undefined8 *)(param_3 + 2) = uVar4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


